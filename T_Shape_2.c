#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int gap = n - i - 1;
        for (int j = 0; j < gap; j++)
        {
            printf(" ");
        }

        int item_count = 2 * i + 1;

        for (int j = 0; j < item_count; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
