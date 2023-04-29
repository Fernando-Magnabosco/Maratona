#include <bits/stdc++.h>
using namespace std;

// generate |n-1| subsets and test their sum
int isSubsetSum(vector<int> set, int n, int sum)
{
    if (isSubsetSum(set, n - 1, sum) == sum)
        return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, n;
    vector<int> valores;

    cin >> n;
    while (cin >> a)
        valores.push_back(a);

    for (int i = 0; i < pow(2, valores.size()); i++)
    {
        int sum = 0;
        for (int j = 0; j < valores.size(); j++)
            if (i & (int)pow(2, j))
                sum += valores[j];

        if (sum == n)
        {
            cout << "SIM\n";
            return 0;
        }
    }
    cout << "NAO\n";

    return 0;
}