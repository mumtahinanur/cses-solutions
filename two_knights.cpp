#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, total_combos, attacking_combos;

    cin >> n;

    for(i = 1; i <= n; i++) {
        total_combos = ((i * i) * (i * i - 1)) / 2;
        attacking_combos = 4 * (i - 1) * (i - 2);

        cout << total_combos - attacking_combos << endl;
    }

    return 0;
}