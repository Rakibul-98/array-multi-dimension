// https://atcoder.jp/contests/abc311/tasks/abc311_b?lang=en

#include <stdio.h>

int main()
{
  int N, D;
  scanf("%d %d", &N, &D);

  char matrix[N][D];

  for (int row = 0; row < N; row++)
  {
    for (int col = 0; col < D; col++)
    {
      scanf(" %c", &matrix[row][col]);
    }
  }

  int maxStreak = 0;
  int currentStreak = 0;

  for (int col = 0; col < D; col++)
  {
    int allFree = 1;

    for (int row = 0; row < N; row++)
    {
      if (matrix[row][col] == 'x')
      {
        allFree = 0;
        break;
      }
    }

    if (allFree)
    {
      currentStreak++;
      if (currentStreak > maxStreak)
      {
        maxStreak = currentStreak;
      }
    }
    else
    {
      currentStreak = 0;
    }
  }

  printf("%d\n", maxStreak);

  return 0;
}
