// https://atcoder.jp/contests/abc282/tasks/abc282_b?lang=en

#include <stdio.h>

int main()
{
  int N, M;
  scanf("%d %d", &N, &M);

  char array[N + 1][M + 1];

  for (int row = 1; row <= N; row++)
  {
    for (int col = 1; col <= M; col++)
    {
      scanf(" %c", &array[row][col]);
    }
  }

  int validPairs = 0;
  for (int p1 = 1; p1 <= N; p1++)
  {
    for (int p2 = p1 + 1; p2 <= N; p2++)
    {
      int can_solve_all = 1;
      for (int col = 1; col <= M; col++)
      {
        if (array[p1][col] == 'x' && array[p2][col] == 'x')
        {
          can_solve_all = 0;
          break;
        }
      }
      if (can_solve_all)
      {
        validPairs++;
      }
    }
  }

  printf("%d\n", validPairs);

  return 0;
}
