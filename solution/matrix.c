// https://basecamp.eolymp.com/en/problems/8941

#include <stdio.h>

int main()
{
  int n, m;
  scanf(" %d %d", &n, &m);

  int matrix[n + 1][m + 1];
  int count = 0;
  for (int line = 1; line <= n; line++)
  {
    for (int col = 1; col <= m; col++)
    {
      count++;
      printf("%d ", count);
    }
    printf("\n");
  }

  return 0;
}