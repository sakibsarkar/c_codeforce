#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("\n-------------\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n", a[i]);
    }

    return 0;
}
