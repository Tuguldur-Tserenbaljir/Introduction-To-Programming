	To start the project,I noticed that the maze started from 0 from the right and then finished at result 0 in the left 
which in the given example of the maze 4 by 7.After brainstorming for various ideas for this assignment, I have decided to add 
another similar void maze called “Result Maze” such that all it’s values set tozeros where later it can store the information 
from the actual maze whicheither finds a path or prints “No way”. Thus, if there is no way to the destination, it saves “X” at
the beginning of the resulting maze.
	Closinginto the final solution of the assignment, all there was left to do was tocheck if the path exists while checking 
all the possible directions that thepath can choose from the starting point in the function “Result Maze”. The onlyfour possible
 moves that the path can check itself is up, down, left and right.After checking if it is safe for the path to move from the four
 moves, it replacesthe zero in the new maze to a two. This function solves the problem usingbacktracking. After the program decides
 if the maze exists or for a solution bychecking all the possible moves in the resulting maze function, it then returnsto the find
 path function using dynamic array method which prints out the finalproduct of twos and zeros or “No way”.
	Inconclusion, although this project took me some time to do where the extra daysfor the assignment was helpful, I managed 
to overcome it by the help of googleand specially the website “GeekForGeeks” which gave me some ideas for theproject.
