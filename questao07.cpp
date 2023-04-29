#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, amountOfDigits;
    int sum = 0;
    cin >> n;
    m = n;
    amountOfDigits = floor(log10(n)) + 1;

    for (int i = 0; i < amountOfDigits; i++)
    {
        int digit = m % 10;
        sum += pow(digit, amountOfDigits);
        m /= 10;
    }

    cout << "O numero" << (sum == n ? "" : " não") << " é um número de Armstrong\n";

    return 0;
}