#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char c : s)
        if (isupper(c))
        {
            cout << "SIM\n";
            return 0;
        }

    cout << "NAO\n";
    return 0;
}
