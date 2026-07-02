#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int is_acc_order = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                is_acc_order = false;
                break;
            }
        }
        cout << (is_acc_order ? "YES" : "NO");

        cout << endl;
    }

    return 0;
}
