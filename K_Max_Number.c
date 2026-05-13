#include <stdio.h>

long long findMax(long long a[], int n)
{
    // Base case
    if (n == 1)
    {
        return a[0];
    }

    long long max = findMax(a, n - 1);

    if (a[n - 1] > max)
    {
        return a[n - 1];
    }

    return max;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    printf("%lld\n", findMax(a, n));

    return 0;
}