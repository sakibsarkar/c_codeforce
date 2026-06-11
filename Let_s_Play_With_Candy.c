#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long current_label;
    long long expect = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &current_label);

        if (current_label == expect)
        {
            expect++;
        }
    }

    printf("%lld", expect);

    return 0;
}