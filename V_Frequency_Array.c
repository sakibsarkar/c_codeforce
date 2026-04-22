#include <stdio.h>

int main(void)
{
    int n;
    int m;

    scanf("%d %d", &n, &m);

    int x = 0;
    int count[m + 1];

    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        count[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
