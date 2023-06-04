#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int r, c, t;

    cin >> t;

    while(t--) {
        cin >> r >> c;

        if(c > r) {
            if(c % 2 == 1) {
                cout << (c * c) - (r - 1) << endl;
            }
            else {
                cout << ((c -1) * (c - 1) + 1) + r - 1 << endl;
            }
        }

        else {
            if(r % 2 == 0) {
                cout << (r * r) - (c - 1) << endl;
            }
            else {
                cout << ((r - 1) * (r - 1) + 1) + c - 1 << endl;
            }
        }
    }

    return 0;
}