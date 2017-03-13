# Connect4

Connect Four (also known as Captain's Mistress, Four Up, Plot Four, Find Four, Fourplay[citation needed], Four in a Row, Four in a Line and Gravitrips (in Soviet Union)) is a two-player connection game in which the players first choose a color and then take turns dropping colored discs from the top into a seven-column, six-row vertically suspended grid. The pieces fall straight down, occupying the next available space within the column. The objective of the game is to be the first to form a horizontal, vertical, or diagonal line of four of one's own discs. Connect Four is a solved game. The first player can always win by playing the right moves.

The game was first sold under the famous Connect Four trademark by Milton Bradley in February 1974.
Object: Connect four of your checkers in a row while preventing your opponent from doing the same.
#Gameplay
— Milton Bradley, Connect Four "Pretty Sneaky, Sis" television commercial, 1977
The animation demonstrates Connect Four gameplay where the first player begins by dropping his/her yellow disc into the center column of the game board. The two players then alternate turns dropping one of their discs at a time into an unfilled column, until the second player, with red discs, achieves four discs in a row, diagonally, and wins. If the game board fills before either player achieves four in a row, then the game is a draw.
#Mathematical solution
Connect Four is a two-player game with "perfect information". This term describes games where one player at a time plays, players have all the information about moves that have taken place, and all moves that can take place, for a given game state. Connect Four also belongs to the classification of an adversarial, zero-sum game, since a player's advantage is an opponent's disadvantage.

One measure of complexity of the Connect Four game is the number of possible games board positions. For classic Connect Four played on 6 high, 7 wide grid, there are 4,531,985,219,092 positions[3] for all game boards populated with 0 to 42 pieces.

The game was first solved by James Dow Allen (October 1, 1988), and independently by Victor Allis (October 16, 1988).[4] Allis describes a knowledge based approach,[5] with nine strategies, as a solution for Connect Four. Allen also describes winning strategies[6][7] in his analysis of the game. At the time of the initial solutions for Connect Four, brute force analysis was not deemed feasible given the game's complexity and the computer technology available at the time.

Connect Four has since been solved with brute force methods beginning with John Tromp's work in compiling an 8-ply database[4][8] (Feb 4, 1995). The artificial intelligence algorithms able to strongly solve Connect Four are minimax or negamax, with optimizations that include alpha-beta pruning, move ordering, and transposition tables. The code for solving Connect Four with these methods is also the basis for the Fhourstones[9] integer performance benchmark.

The solved conclusion for Connect Four is first player win. With perfect play, the first player can force a win,[4][5][6] on or before the 41st move[10] (ply) by starting in the middle column. The game is a theoretical draw when the first player starts in the columns adjacent to the center. For the edges of the game board, column 1 and 2 on left (or column 7 and 6 on right), the exact move-value score for first player start is loss on the 40th move,[10] and loss on the 42nd move,[10] respectively. In other words, by starting with the four outer columns, the first player allows the second player to force a win.
#Rule variations
There are many variations of Connect Four with differing game board sizes, board arrangements, game pieces, and/or gameplay rules. Many variations are popular with game theory and artificial intelligence research, rather than with physical game boards and gameplay by persons.

The most commonly used Connect Four board size is 7 columns × 6 rows. Size variations include 8×7, 9×7, 10×7, 8×8, and Infinite Connect-Four.[11] Alternate board arrangements include Cylinder-Infinite Connect-Four.[12] One board variation available as a physical game is Hasbro's Connect 4x4.


A travel version of the Milton Bradley game.
Several versions of Hasbro's Connect Four physical gameboard make it easy to remove game pieces from the bottom one at a time. Along with traditional gameplay, this feature allows for variations of the game. (ref:https://en.wikipedia.org/wiki/Connect_Four)
