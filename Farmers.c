#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int new_days = (m1 * d) / (m2 + m1);

        printf("%d\n", d - new_days);
    }

    return 0;
}