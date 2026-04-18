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

    int min_indx = 0;
    int max_indx = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[min_indx])
        {
            min_indx = i;
        }
        if (a[i] > a[max_indx])
        {
            max_indx = i;
        }
    }

    int temp = a[min_indx];
    a[min_indx] = a[max_indx];
    a[max_indx] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
