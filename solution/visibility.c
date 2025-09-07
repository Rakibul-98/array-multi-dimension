// https://atcoder.jp/contests/abc197/tasks/abc197_b?lang=en

#include <stdio.h>

int main()
{
  int H, W, X, Y;
  scanf("%d %d %d %d", &H, &W, &X, &Y);

  char grid[H + 1][W + 1];

  for (int row = 1; row <= H; row++)
  {
    for (int col = 1; col <= W; col++)
    {
      scanf(" %c", &grid[row][col]);
    }
  }

  int count = 1;
  for (int row = X - 1; row > 0; row--)
  {
    if (grid[row][Y] == '#')
    {
      break;
    }
    count++;
  }

  for (int row = X + 1; row <= H; row++)
  {
    if (grid[row][Y] == '#')
    {
      break;
    }
    count++;
  }

  for (int col = Y - 1; col > 0; col--)
  {
    if (grid[X][col] == '#')
    {
      break;
    }
    count++;
  }

  for (int col = Y + 1; col <= W; col++)
  {
    if (grid[X][col] == '#')
    {
      break;
    }
    count++;
  }

  printf("%d", count);

  return 0;
}
