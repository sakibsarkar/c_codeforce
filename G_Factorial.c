#include <stdio.h>

long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main(void)
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", factorial(n));
    }
    return 0;
}
