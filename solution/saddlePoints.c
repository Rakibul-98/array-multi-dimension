// https://basecamp.eolymp.com/en/problems/5282

#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  int array[n][m];

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < m; col++)
    {
      scanf("%d", &array[row][col]);
    }
  }

  int minRow[n];
  int maxCol[m];

  for (int row = 0; row < n; row++)
  {
    int minVal = array[row][0];
    for (int col = 1; col < m; col++)
    {
      if (array[row][col] < minVal)
      {
        minVal = array[row][col];
      }
    }
    minRow[row] = minVal;
  }

  for (int col = 0; col < m; col++)
  {
    int maxVal = array[0][col];
    for (int row = 1; row < n; row++)
    {
      if (array[row][col] > maxVal)
      {
        maxVal = array[row][col];
      }
    }
    maxCol[col] = maxVal;
  }

  int count = 0;
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < m; col++)
    {
      if (array[row][col] == minRow[row] && array[row][col] == maxCol[col])
      {
        count++;
      }
    }
  }

  printf("%d", count);

  return 0;
}
