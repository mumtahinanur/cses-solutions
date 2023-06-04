#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long count=1, max=1;
    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[i+1]) {
            count++;
        }
        else {
            count = 1;
        }

        if(count > max) {
            max = count;
        }
    }

    cout << max;
    return 0;
}
