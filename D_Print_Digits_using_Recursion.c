#include <stdio.h>

void print_numb_by_space(int a)
{
    if (a < 10)
    {
        printf("%d ", a);
        return;
    }
    print_numb_by_space(a / 10);
    printf("%d ", a % 10);
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        print_numb_by_space(n);
        printf("\n");
    }

    return 0;
}
