#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int indx, value;
    scanf("%d %d", &indx, &value);
    // [ 1, 2, 3, 4, 0 ]

    for (int i = n; i >= indx + 1; i--)
    {

        a[i] = a[i - 1];
    }
    a[indx] = value;

    printf("-------------\n");
    for (int i = 0; i <= n; i++)
    {

        printf("%d\n", a[i]);
    }

    return 0;
}
