#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int n; cin >> n;
    int v[n+1];
    int t = 1;
    int last;

    for (int i = 0; i < n; i++) {

        int num; cin >> num;
        if (i == 0) {
            v[i] = num;
            last = num;
            continue;
            
        } else {
            if (num > last) {
                v[i] = num;
                last = num;
                t++;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << v[i] << " ";
    }

    return 0;
}