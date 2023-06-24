#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, count=0;
    cin >> n;

    for(i=5; n/i >= 1; i*=5) {
        count += n/i;
    }

    cout << count;

    return 0;
}