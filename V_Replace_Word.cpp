#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t indx = s.find("EGYPT");

    while (indx != string::npos)
    {
        s.replace(indx, 5, " ");
        indx = s.find("EGYPT");
    }

    cout << s << endl;

    return 0;
}