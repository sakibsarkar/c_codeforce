#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long m;
        long long a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long input_count = a * b * c;

        if (input_count == 0 || m % input_count != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", m / input_count);
        }
    }

    return 0;
}