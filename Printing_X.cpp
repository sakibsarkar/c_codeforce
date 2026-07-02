#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int center_x = n / 2;

    for (int i = 0; i < n; i++)
    {
        string row(n, ' ');

        if (i == center_x)
        {
            row[center_x] = 'X';
        }
        else if (i < center_x)
        {
            row[i] = '\\';
            row[n - 1 - i] = '/';
        }
        else
        {
            row[n - 1 - i] = '/';
            row[i] = '\\';
        }

        cout << row << '\n';
    }

    return 0;
}