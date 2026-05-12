#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum_primary = 0;
    int sum_secondary = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_primary += a[i][j];
            }
            if ((i + j) == (n - 1))
            {
                sum_secondary += a[i][j];
            }
        }
    }

    printf("%d", (sum_primary - sum_secondary) < 0 ? (sum_primary - sum_secondary) * -1 : sum_primary - sum_secondary);

    return 0;
}
