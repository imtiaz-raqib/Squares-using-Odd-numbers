/* Prints a table of squares using an odd method */

#include <stdio.h>

int main(void)
{
  int i, n, odd, square;

  printf("This program prints a table of squares.\n\n");
  printf("Enter number of entries in table (max 100):  ");
  scanf("%d", &n);

  odd = 3;
  square = 1;

  /* Tabular formatting */
  printf("\n");
  printf("%24s\n", "-------------------");
  printf("%15s%9s\n", "| Number |", "Square |");
  printf("%24s\n", "-------------------");
  
  
  for (i = 1; i <= n; ++i) {
    
    printf("%6s%5d%4s%5d%4s\n", "|", i, "|", square, "|");
    printf("%24s\n", "-------------------");
    
    square += odd; /*This is where the magic happens*/
    odd+=2; /*Incrementing the odd number by 2 as each consecutive square gets added with the consecutive odd number*/

  }
  printf("\n");
  return 0;
}
