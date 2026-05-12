#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int space = n - i - 1;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = i; 0 <= j; j--)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}
