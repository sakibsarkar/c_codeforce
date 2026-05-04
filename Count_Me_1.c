#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int two_devisor = 0, three_devisor = 0;
    long long a;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);

        if (a % 2 == 0)
        {
            two_devisor++;
        }
        else if (a % 3 == 0)
        {
            three_devisor++;
        }
    }

    printf("%d %d\n", two_devisor, three_devisor);
    return 0;
}
