#include<iostream>
#include <cstdlib>
 
 
using namespace std;
void Display();
bool Check(int index, int value);
int Drop(int index, char player);
char place[6][7];

int main(){
	for(int index =0;index <= 5; index++){		//Fill empty White spaces
		for(int value = 0; value<=6; value++)
			place[index][value] = ' ';		
	}				
	Display();//Initial Display
	int rowChoice;//Will house user row choice
	int dropValue = 0;//Will hold Droped values
	int charsPlaced = 0;//Checks for draw
	bool gamewon = false;//Will be changed to true when game is won and will exit while loop
	char player = 82;//start as RED will change back 2 YELLOW 82 ascii for Red and 89 Ascii for yellow
	while(!gamewon){//stops when match won
		if(dropValue != -1){//if last drop was illegal
			if(player == 82){//changes player
				cout<<"Yellows Turn: ";
				player = 89;//char of players piece
			}
			else{
				cout<<"Reds Turn: ";
				player = 82;//char of player piece
			}
		}
		while(true){//will run untill 'break;'
			if(charsPlaced == 42) break;//if draw
			cin>>rowChoice;//get user input
			rowChoice--;//take off 1 to account for arrays starting at 0 not 1
			if(rowChoice <=6 && rowChoice>= 0) break;//if within valid range stop loop
			else cout<< "\nPlease enter a value between 1 and 7 :";//ask for input and loop again
			if (cin.fail())	//catch a non number
			{						//
				cin.clear();		//Stops cin trying to put its value in to rowChoice
				char c;			//Try entering a non number without this, 2 see what this does
				cin>>c;			//
			}						//Catch a non number

		}
		if(charsPlaced == 42) break;//if draw 6*7 = 42
		dropValue = Drop(rowChoice,player);//Drop the player store the row in dropValue
		if(dropValue == -1)	cout<<"Column is full\nPlease enter anothor number between 1 and 7:";//if error -1 row is full
		else{
			gamewon = Check(dropValue,rowChoice);//Check if game is won
			charsPlaced ++;//another character has been succesfully placed
			system("cls");//This clears the screen
			Display();//Displayed updated board
		}
	}
	if(charsPlaced == 42){//if draw
		cout<<"No winner, Game was draw\n";
		system("pause");
		return 0;
	}
	if(player == 15)//if won by RED
		cout<<"Red Wins";
	else cout<<"Yellow wins\n";//Else won by YELLOW
	return 0;//Exit application
}
void Display(){
	cout<<" 1   2   3   4   5   6   7\n";
	for(int index = 0;index<= 5;index++)//create 6 rows and 7 columns with extended Ascii value
	{
		for(int value =0; value <= 6; value++) cout<<char(218)<<char(196)<<char(191)<<" ";
		cout<<'\n';
		for(int value =0; value <= 6; value++) cout<<char(179)<<place[index][value]<<char(179)<<" ";
		cout<<'\n';
		for(int value =0; value <= 6; value++) cout<<char(192)<<char(196)<<char(217)<<" ";
		cout<<'\n';
	}
}
bool Check(int index, int value){
	int vertical = 1;//(|)
	int horizontal = 1;//(-)
	int diagonalRight = 1;//(\)
	int diagonalLeft = 1;//(/)
	char player = place[index][value];
	int i;//vertical
	int ii;//horizontal
	//Check for vertical(|)
	for(i = index +1;place[i][value] == player && i <= 5;i++,vertical++);//Check down
	for(i = index -1;place[i][value] == player && i >= 0;i--,vertical++);//Check up
	if(vertical >= 4)return true;
	//Check for horizontal(-)
	for(ii = value -1;place[index][ii] == player && ii >= 0;ii--,horizontal++);//Check left
	for(ii = value +1;place[index][ii] == player && ii <= 6;ii++,horizontal++);//Check right
	if(horizontal >= 4) return true;
	//Check for diagonal 1 (\)
	for(i = index -1, ii= value -1;place[i][ii] == player && i>=0 && ii >=0; diagonalRight ++, i --, ii --);//up and left
	for(i = index +1, ii = value+1;place[i][ii] == player && i<=5 && ii <=6;diagonalRight ++, i ++, ii ++);//down and right
	if(diagonalRight >= 4) return true;
	//Check for diagonal 2(/)
	for(i = index -1, ii= value +1;place[i][ii] == player && i>=0 && ii <= 6; diagonalLeft ++, i --, ii ++);//up and right
	for(i = index +1, ii= value -1;place[i][ii] == player && i<=5 && ii >=0; diagonalLeft ++, i ++, ii --);//up and left
	if(diagonalLeft >= 4) return true;
	return false;
}
int Drop(int index, char player){
	if(index >=0 && index<= 6)
	{
		if(place[0][index] == ' '){
			int i;
			for(i = 0;place[i][index] == ' ';i++)
				if(i == 5){place[i][index] = player;
			return i;}
			i--;
			place[i][index] =player;
			return i;

		}
		else{
			return -1;
		}

	}
	else{
		return -1;
	}

}
