// https://atcoder.jp/contests/abc303/tasks/abc303_b?lang=en

#include <stdio.h>

int main()
{
  int N, M;
  scanf("%d %d", &N, &M);

  int grid[M][N];
  int adj[51][51] = {0};

  for (int row = 0; row < M; row++)
  {
    for (int col = 0; col < N; col++)
    {
      scanf(" %d", &grid[row][col]);
    }
    for (int col = 0; col < N - 1; col++)
    {
      int a = grid[row][col], b = grid[row][col + 1];
      if (a > b)
      {
        int temp = a;
        a = b;
        b = temp;
      }
      adj[a][b] = 1;
    }
  }

  int total_pairs = (N * (N - 1)) / 2;
  int friendly = 0;

  for (int row = 0; row <= N; row++)
  {
    for (int col = 0; col <= N; col++)
    {
      if (adj[row][col])
        friendly++;
    }
  }
  int bad_pairs = total_pairs - friendly;
  printf("%d", bad_pairs);

  return 0;
}
