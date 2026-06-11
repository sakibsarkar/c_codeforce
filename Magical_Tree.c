#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int rows = (n / 2) + 6;

    for (int i = 0; i < rows; i++)
    {
        int gap = rows - i - 1;

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

    int width = 2 * rows - 1;
    int tree_base_space = (width - n) / 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < tree_base_space; j++)
            printf(" ");

        for (int j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}