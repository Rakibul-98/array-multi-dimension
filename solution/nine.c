// https://atcoder.jp/contests/abc309/tasks/abc309_a?lang=en

#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int rowA = (a - 1) / 3;
  int colA = (a - 1) % 3;
  int rowB = (b - 1) / 3;
  int colB = (b - 1) % 3;

  if (rowA == rowB && ((colA - colB == 1) || (colB - colA == 1)))
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}