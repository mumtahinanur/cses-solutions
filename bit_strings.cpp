#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, r=1, i;

    cin >> n;

    for(i=1; i<=n; i++) {
        r = (r*2) % 1000000007;
    }

    cout << r;

    return 0;
}