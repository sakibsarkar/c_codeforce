#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int small = 1;
    int large = n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            cout << large;
            large--;
        }
        else
        {
            cout << small;
            small++;
        }
    }
    return 0;
}