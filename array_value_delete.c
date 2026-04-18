#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    // [1,2,3,4,5]
    //  [1,3,4,5,0]
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int indx;
    scanf("%d", &indx);
    // return 0;
    for (int i = indx; i <= n - 1; i++)
    {

        a[i] = i == n - 1 ? 0 : a[i + 1];
    }

    printf("\n-------------\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n", a[i]);
    }

    return 0;
}
