#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    s[1] = toupper(s[1]);
    s[n - 2] = toupper(s[n - 2]);

    for (int i = n - 1; i >= 0; i--)
        cout << s[i];
    cout << '\n';

    return 0;
}