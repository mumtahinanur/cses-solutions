#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, i, move = 0;
    cin >> n;
    long long a[n];
 
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for(i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            move += (a[i] - a[i+1]);
            a[i+1] = a[i];
        }
    }
 
    cout << move;
 
    return 0;
}