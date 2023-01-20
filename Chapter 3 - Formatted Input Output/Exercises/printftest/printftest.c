/*
* Name: printftest.c
* Purpose: prints out 4 different numbers via printf
* Author: Nicholas Brennan
* Date Written: 1/18/23
*/

#include <stdio.h>

int main(void)
{
  printf("%6d,%4d", 86, 1040);
  printf("%12.5e", 30.253);
  printf("%.4f", 83.162);
  printf("%-6.2g", .0000009979);

  return 0;
}