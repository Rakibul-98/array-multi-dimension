// https://basecamp.eolymp.com/en/problems/4752

#include <stdio.h>

int main()
{
  int B, G;
  scanf("%d %d", &B, &G);

  int count = 0;
  for (int row = 1; row <= B; row++)
  {
    for (int col = 1; col <= G; col++)
    {
      int rowWise = (row - 1) * G + col;
      int colWise = (col - 1) * B + row;
      if (rowWise == colWise)
      {
        count++;
      }
    }
  }

  printf("%d", count);

  return 0;
}
