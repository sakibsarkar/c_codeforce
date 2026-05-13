#include <stdio.h>

int choose_element()
{
    return 0;
}

int main(void)
{

    int n, k;
    scanf("%d %d", &n, &k);

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    long long sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
    }

    printf("%lld\n", sum);

    return 0;
}
