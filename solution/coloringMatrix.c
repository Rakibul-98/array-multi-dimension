// https://atcoder.jp/contests/abc298/tasks/abc298_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int A[N + 1][N + 1], B[N + 1][N + 1];

  for (int row = 1; row <= N; row++)
  {
    for (int col = 1; col <= N; col++)
    {
      scanf("%d", &A[row][col]);
    }
  }
  for (int row = 1; row <= N; row++)
  {
    for (int col = 1; col <= N; col++)
    {
      scanf("%d", &B[row][col]);
    }
  }

  int valid = 0;

  for (int rotation = 1; rotation <= 4; rotation++)
  {
    int ok = 1;
    for (int row = 1; row <= N && ok; row++)
    {
      for (int col = 1; col <= N && ok; col++)
      {
        int x, y;
        if (rotation == 1)
        {
          x = row;
          y = col;
        }
        if (rotation == 2)
        {
          x = col;
          y = N + 1 - row;
        }
        if (rotation == 3)
        {
          x = N + 1 - row;
          y = N + 1 - col;
        }
        if (rotation == 4)
        {
          x = N + 1 - col;
          y = row;
        }

        if (A[row][col] == 1 && B[x][y] != 1)
        {
          ok = 0;
        }
      }
    }
    if (ok)
    {
      valid = 1;
      break;
    }
  }

  if (valid)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}
