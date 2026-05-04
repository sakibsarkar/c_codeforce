#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];

    int max = 0;
    int min = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        int curr;

        scanf("%d", &curr);
        if (curr > max)
        {
            max = curr;
        }

        if (curr < min)
        {
            min = curr;
        }
    }

    printf("%d %d", min, max);

    return 0;
}