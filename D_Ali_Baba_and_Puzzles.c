#include <stdio.h>

long long calc(long long x, long long y, char op)
{
    if (op == '+')
        return x + y;
    if (op == '-')
        return x - y;
    return x * y;
}

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    char ops[3] = {'+', '-', '*'};

    for (int op1 = 0; op1 < 3; op1++)
    {
        for (int op2 = 0; op2 < 3; op2++)
        {
            long long int res1 = calc(calc(a, b, ops[op1]), c, ops[op2]);
            if (res1 == d)
            {
                printf("YES\n");
                return 0;
            }

            long long int res2 = calc(a, calc(b, c, ops[op2]), ops[op1]);
            if (res2 == d)
            {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}