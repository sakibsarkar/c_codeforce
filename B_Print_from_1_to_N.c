#include <stdio.h>

void func(int n)
{
    if (n == 0)
    {
        return;
    }
    //0
    func(n - 1); // 0
    printf("%d\n", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
