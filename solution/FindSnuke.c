// https://atcoder.jp/contests/abc302/tasks/abc302_b?lang=en

#include <stdio.h>
#include <string.h>

int main()
{
  int H, W;
  scanf("%d %d", &H, &W);

  char grid[H + 1][W + 1];
  for (int row = 1; row <= H; row++)
  {
    for (int col = 1; col <= W; col++)
    {
      scanf(" %c", &grid[row][col]);
    }
  }

  char target[] = "snuke";
  int len = strlen(target);

  int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int row = 1; row <= H; row++)
  {
    for (int col = 1; col <= W; col++)
    {
      if (grid[row][col] == 's')
      {
        for (int dir = 0; dir < 8; dir++)
        {
          int r = row, c = col;
          int match = 1;

          for (int k = 0; k < len; k++)
          {
            if (grid[r][c] != target[k])
            {
              match = 0;
              break;
            }
            r += dx[dir];
            c += dy[dir];
          }

          if (match)
          {
            r = row, c = col;
            for (int k = 0; k < len; k++)
            {
              printf("%d %d\n", r, c);
              r += dx[dir];
              c += dy[dir];
            }
            return 0;
          }
        }
      }
    }
  }

  return 0;
}
