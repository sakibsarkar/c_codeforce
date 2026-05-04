#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < (2 * n) + 1; i++)
    {
        int row;

        if (i < n)
        {
            row = i;
        }
        else if (i == n)
        {
            row = i - 1;
        }

        else
        {
            row = 2 * n - i - 1;
        }
        int gap = n - row - 1;
        int stars = 2 * row + 1;

        for (int j = 0; j < gap; j++)
            printf(" ");

        for (int j = 0; j < stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}