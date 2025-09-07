// https://atcoder.jp/contests/abc296/tasks/abc296_b?lang=en

#include <stdio.h>

int main()
{
  int n = 8;
  char array[n][n];

  int r = -1, c = -1;
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      scanf(" %c", &array[row][col]);
      if (array[row][col] == '*')
      {
        r = row;
        c = col;
      }
    }
  }
  char col = 'a' + c;
  int row = 8 - r;
  printf("%c%d", col, row);

  return 0;
}
