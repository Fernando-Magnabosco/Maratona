#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin >> n;
    vector<int> v;
    vector<int> w;
    v.reserve(n);
    w.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        w.push_back(a);
    }

    for (int i = 0; i < n; i++)
        cout << v[i] + w[i] << ' ';

    cout << '\n';

    return 0;
}