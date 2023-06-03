#include <bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    cin >> n;

    int banknotes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int count = n / banknotes[i];
        n -= count * banknotes[i];
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << banknotes[i] << ".00" << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int count = n / coins[i];
        n -= count * coins[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] << endl;
    }

    return 0;
}