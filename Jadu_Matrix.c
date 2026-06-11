#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    if (n != m)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int is_jadu_matrix = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    is_jadu_matrix = 0;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_jadu_matrix = 0;
                    break;
                }
            }
        }
    }
    printf(is_jadu_matrix ? "YES" : "NO");
    return 0;
}
