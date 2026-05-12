#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int will_take_number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                will_take_number = 0;
                break;
            }
        }
    }
    printf(will_take_number ? "will take number" : "will not take number");

    return 0;
}
