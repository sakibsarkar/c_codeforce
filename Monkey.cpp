#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        char temp[100001];
        int k = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                temp[k++] = s[i];
            }
        }

        sort(temp, temp + k);

        for (int i = 0; i < k; i++)
        {
            cout << temp[i];
        }
        cout << endl;
    }

    return 0;
}