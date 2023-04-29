#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int a;

    while (cin >> a)
        v.push_back(a);

    vector<int> subseq;
    subseq.push_back(*v.begin());

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > subseq.back())
            subseq.push_back(v[i]);
        else
        {
            auto it = lower_bound(subseq.begin(), subseq.end(), v[i]);
            *it = v[i];
        }
    }

    cout << subseq.size() << endl;

    return 0;
}