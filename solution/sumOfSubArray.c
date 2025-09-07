// https://basecamp.eolymp.com/en/problems/9562

#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  int array[n + 1][m + 1];

  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= m; col++)
    {
      scanf(" %d", &array[row][col]);
    }
  }

  int r1, c1, r2, c2;
  scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

  int sum = 0;
  for (int row = r1; row <= r2; row++)
  {
    for (int col = c1; col <= c2; col++)
    {
      sum += array[row][col];
    }
  }
  printf("%d ", sum);

  return 0;
}
