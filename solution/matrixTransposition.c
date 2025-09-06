// https://atcoder.jp/contests/abc237/tasks/abc237_b?lang=en

#include <stdio.h>

int main()
{
  int H, W;
  scanf("%d %d", &H, &W);

  int matrix[H][W];
  for (int row = 0; row < H; row++)
  {
    for (int col = 0; col < W; col++)
    {
      scanf(" %d", &matrix[row][col]);
    }
  }

  for (int row = 0; row < W; row++)
  {
    for (int col = 0; col < H; col++)
    {
      printf("%d ", matrix[col][row]);
    }
    printf("\n");
  }

  return 0;
}