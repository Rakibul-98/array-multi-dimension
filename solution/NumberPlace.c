// https://atcoder.jp/contests/abc327/tasks/abc327_c?lang=en

#include <stdio.h>

int main()
{
  int N = 10;
  int grid[N][N];

  for (int row = 1; row < N; row++)
  {
    for (int col = 1; col < N; col++)
    {
      scanf(" %d", &grid[row][col]);
    }
  }

  for (int row = 1; row < N; row++)
  {
    int row_fr[10] = {0};
    int col_fr[10] = {0};
    for (int col = 1; col < N; col++)
    {
      row_fr[grid[row][col]]++;
      col_fr[grid[col][row]]++;
    }
    for (int i = 1; i < 10; i++)
    {
      if (row_fr[i] != 1 || col_fr[i] != 1)
      {
        printf("No\n");
        return 0;
      }
    }
  }

  for (int startRow = 1; startRow < N; startRow += 3)
  {
    for (int startCol = 1; startCol < N; startCol += 3)
    {
      int sub_grid_fr[10] = {0};
      for (int row = startRow; row < startRow + 3; row++)
      {
        for (int col = startCol; col < startCol + 3; col++)
        {
          sub_grid_fr[grid[row][col]]++;
        }
      }
      for (int i = 1; i < 10; i++)
      {
        if (sub_grid_fr[i] != 1)
        {
          printf("No\n");
          return 0;
        }
      }
    }
  }
  printf("Yes\n");

  return 0;
}
