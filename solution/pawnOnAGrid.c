// https://atcoder.jp/contests/abc280/tasks/abc280_a?lang=en

#include <stdio.h>

int main()
{
  int H, W;
  scanf("%d %d", &H, &W);

  char grid[H][W];
  int count = 0;
  for (int row = 0; row < H; row++)
  {
    for (int col = 0; col < W; col++)
    {
      scanf(" %c", &grid[row][col]);
      if (grid[row][col] == '#')
      {
        count++;
      }
    }
  }
  printf("%d", count);

  return 0;
}