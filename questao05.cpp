#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    auto it = v.begin();
    int max = 0;
    int a;

    while (cin >> a)
        v.push_back(a);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        int sum = 0;
        int aux = *i;

        while (aux > 0)
        {
            sum += aux % 10;
            aux /= 10;
        }

        if (sum > max)
        {
            max = sum;
            it = i;
        }
    }

    cout << it - v.begin() << " (" << *it << ')' << endl;

    return 0;
}