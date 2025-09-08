// https://atcoder.jp/contests/abc309/tasks/abc309_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  char rowStr[101];
  int grid[N + 1][N + 1];

  for (int row = 1; row <= N; row++)
  {
    scanf("%s", rowStr);
    for (int col = 1; col <= N; col++)
    {
      grid[row][col] = rowStr[col - 1] - '0';
    }
  }

  int outer[400];
  int idx = 0;

  for (int col = 1; col <= N; col++)
    outer[idx++] = grid[1][col];
  for (int row = 2; row <= N; row++)
    outer[idx++] = grid[row][N];
  for (int col = N - 1; col >= 1; col--)
    outer[idx++] = grid[N][col];
  for (int row = N - 1; row >= 2; row--)
    outer[idx++] = grid[row][1];

  int last = outer[idx - 1];
  for (int i = idx - 1; i > 0; i--)
    outer[i] = outer[i - 1];
  outer[0] = last;

  idx = 0;
  for (int col = 1; col <= N; col++)
    grid[1][col] = outer[idx++];
  for (int row = 2; row <= N; row++)
    grid[row][N] = outer[idx++];
  for (int col = N - 1; col >= 1; col--)
    grid[N][col] = outer[idx++];
  for (int row = N - 1; row >= 2; row--)
    grid[row][1] = outer[idx++];

  for (int row = 1; row <= N; row++)
  {
    for (int col = 1; col <= N; col++)
    {
      printf("%d", grid[row][col]);
    }
    printf("\n");
  }

  return 0;
}
