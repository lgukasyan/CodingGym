#include <stdio.h>

void fill(int n, int m, int matrix[n][m])
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      scanf("%d", &matrix[i][j]);
}

void solve()
{
  int t, n, m, nt, mt, sum = 0, max = 0, exit = 1, dr = 0;
  scanf("%d", &t);

  for (int i = 0; i < t; ++i)
  {
    scanf("%d", &n);
    scanf("%d", &m);

    int matrix[n][m];

    fill(n, m, matrix);

    for (int j = 0; j < n; ++j)
    {
      for (int k = 0; k < m; ++k)
      {
        nt = j;
        mt = k;

        while (exit == 1)
        {
          if (((nt - 1) < 0 || (mt - 1) < 0) && dr == 0)
          {
            dr = 1;
          }

          if (dr == 0)
          {
            nt--;
            mt--;
          }

          if (((nt + 1) > n - 1 || (mt + 1) > m - 1) && dr == 1)
          {
            exit = 0;
          }

          if (dr == 1)
          {
            sum += matrix[nt][mt];
            nt++;
            mt++;
          }
        }

        dr = 0;
        exit = 1;

        nt = j;
        mt = k;

        while (exit == 1)
        {
          if (((nt - 1) < 0 || (mt + 1) > m - 1) && dr == 0)
          {
            dr = 1;
          }

          if (dr == 0)
          {
            nt--;
            mt++;
          }

          if (((nt + 1) > n - 1 || (mt - 1) < 0) && dr == 1)
          {
            exit = 0;
          }

          if (dr == 1)
          {
            sum += matrix[nt][mt];
            nt++;
            mt--;
          }
        }

        dr = 0;
        exit = 1;
        sum -= matrix[j][k];
        if (sum > max) { max = sum; }
        sum = 0;
      }
    }
    printf("%d\n", max);
    max = 0;
  }
}

int main(void)
{
  solve();
  return 0;
}