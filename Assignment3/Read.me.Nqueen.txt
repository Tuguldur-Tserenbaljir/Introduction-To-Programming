	In this assignment, I used backtracking instead of struct, linked list, pointers and go on because of the fact that I found it would easier
to do and understand the problem fully since I am still a beginner in this field. The three principles that I followed on this code was to 
“Choice, Constraints, Goal” whereas it took me more time to accomplish than I have anticipated.    
	

	After breaking down the problem into small by steps by steps on my notes, I concluded that I would need three main functions which
they are printing my solution “print solution”, solving the assignment “K queen”, checking if it is safe to place a queen “place” function.	


	In the KQueen function, it begins with placing the first queen on the column at its index at 0 which the k represents the queen numberand as goes 
into a while do loop while being not equal to 0 as it first checks if it safe to place the queen in the 1st position. If not, the do loop starts
over to find a safe square for the queen to be placed in. Then the function continues by going through a nested if loop where the
 function stops if the we reached the matrix limit or rather we should continuoe to loop and if we can continue on we move onto the next queen where
 k is incremented by 1. After placing the first loop, for the next queen the place function checks off the diagonal, row, column that we cannot place
 on and then continues in the while loop. When placing the queen does not seem to have a possible solution, the function backtracks by deleting the 
last queen and skips the deleted queen matrix and continue on. In addition, this function continues until every solution is checked. 
	

	Finally after checking all the possible solutions, the program outputs all the possible matrices for the queens to be placed in if it is possible
 but if is is not it prints the 0 zero solution message.

