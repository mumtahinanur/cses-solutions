#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;

    if(n%4 == 1 || n%4 == 2) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;

        if(n%4 == 0) {
            cout << n/2 << endl;
            for(i=1; i<=n; i+=4) {
                cout << i << " " << i+3 << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for(i=2; i<=n; i+=4) {
                cout << i << " " << i+1 << " ";
            }
        }
        else {
            cout << n/2 + 1 << endl << 1 << " " << 2 << " ";
            for(i=4; i<=n; i+=4) {
                cout << i << " " << i+3 << " ";
            }
            cout << endl;

            cout << n/2 << endl << 3 << " ";
            for(i=5; i<=n; i+=4) {
                cout << i << " " << i+1 << " ";
            }
        }
    }
    
    

    return 0;
}