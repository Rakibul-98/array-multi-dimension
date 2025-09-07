// https://basecamp.eolymp.com/en/problems/2322

#include <stdio.h>

int main()
{
  int x, n;
  scanf("%d", &x);
  scanf("%d", &n);

  int array[n][n];

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      scanf(" %d", &array[row][col]);
    }
  }

  for (int col = 0; col < n; col++)
  {
    int isPresent = 0;
    for (int row = 0; row < n; row++)
    {
      if (array[row][col] == x)
      {
        isPresent = 1;
        break;
      }
    }
    if (isPresent)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}
