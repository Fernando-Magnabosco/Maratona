#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long int entrada, count;
    vector<int> valores, saida;
    /*ENTRADA = 2 3 7 8 11
    ULTILMO ELEMENTO DA ENTRADA EH O VALOR FORNESCIDO PELO USUARIO PARA A SOMA, OS DEMAIS CONSTITUEM
    O VETOR DE NUMEROS*/

    while (cin >> entrada)
    {
        valores.push_back(entrada);
    }

    for (auto it = valores.begin(); it < valores.end() - 1; ++it)
    {
        for (auto itt = valores.begin() + 1; itt < valores.end() - 1; ++itt)
        {
            if (*it + *itt == *(valores.end() - 1))
            {
                cout << "SIM";
                return 0;
            }
        }
    }
    cout << "NAO";
    return 0;
}