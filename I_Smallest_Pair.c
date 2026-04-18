#include <stdio.h>
#include <limits.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int smallest_pair = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int pair = a[i] + a[j] + (j - i);

                if (pair < smallest_pair)
                {
                    smallest_pair = pair;
                }
            }
        }

        printf("%d\n", smallest_pair);
    }

    return 0;
}