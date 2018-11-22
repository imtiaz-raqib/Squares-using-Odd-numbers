# Squares-using-Odd-numbers
This C program generates a table of integer squares (max 100) which are calculated using odd numbers relation.\
The user inputs the number of entries he/she wants in the table.

The sqaures are calculated using the odd relation between the squares as we know that:

1 is a square number (= 1 × 1)\
1 + 3 = 4, and 4 is a square number (= 2 × 2)\
1 + 3 + 5 = 9, and 9 is a square number (= 3 × 3) etc!\

The result is outputted in the terminal in a tabular format such as:

imtiazud@Yanet:Squares ~> gcc -Wall squareWithOdd.c -o square\
imtiazud@Yanet:Squares ~> ./square\
This program prints a table of squares.

Enter number of entries in table (max 100):  5

     -------------------
     | Number | Square |
     -------------------
     |    1   |    1   |
     -------------------
     |    2   |    4   |
     -------------------
     |    3   |    9   |
     -------------------
     |    4   |   16   |
     -------------------
     |    5   |   25   |
     -------------------
