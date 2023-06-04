#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, num, i, sum1 = 0, sum2 = 0;
    cin >> n;

    for(i = 1; i < n; i++) {
        cin >> num;
        sum2 += num;
    }

    for(i = 1; i <= n; i++) {
        sum1 += i;
    }

    cout << sum1 - sum2;
    return 0;
}
