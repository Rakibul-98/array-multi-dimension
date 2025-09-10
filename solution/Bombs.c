// https://atcoder.jp/contests/abc295/tasks/abc295_b?lang=en

#include <stdio.h>

int main()
{
  int R, C;
  scanf("%d %d", &R, &C);

  char board[R + 1][C + 1];
  char result[R + 1][C + 1];

  for (int row = 1; row <= R; row++)
  {
    for (int col = 1; col <= C; col++)
    {
      scanf(" %c", &board[row][col]);
      result[row][col] = board[row][col];
    }
  }

  for (int row = 1; row <= R; row++)
  {
    for (int col = 1; col <= C; col++)
    {
      if (board[row][col] >= '1' && board[row][col] <= '9')
      {
        int power = board[row][col] - '0';

        for (int r = 1; r <= R; r++)
        {
          for (int c = 1; c <= C; c++)
          {
            int dist = (row - r);
            if (dist < 0)
            {
              dist = -dist;
            }
            int dist2 = (col - c);
            if (dist2 < 0)
            {
              dist2 = -dist2;
            }
            if (dist + dist2 <= power)
            {
              result[r][c] = '.';
            }
          }
        }
      }
    }
  }

  for (int row = 1; row <= R; row++)
  {
    for (int col = 1; col <= C; col++)
    {
      printf("%c", result[row][col]);
    }
    printf("\n");
  }

  return 0;
}
