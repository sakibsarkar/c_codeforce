#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int is_possible = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        is_possible = 1;
                    }
                }
            }
        }

        cout << (is_possible ? "YES" : "NO") << endl;
    }

    return 0;
}