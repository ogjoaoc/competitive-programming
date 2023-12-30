#include <bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;
    int cnt_a = 0, cnt_b = 0;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (n == 1) cnt_a++;
        else { 
        cnt_b++; 
        cnt_a++;       
        }
    }

    if (cnt_a % 2 == 0) cout << 0 << "\n";
    else cout << 1 << "\n";

    if (cnt_b % 2 == 0) cout << 0 << "\n";
    else cout << 1 << "\n";

    return 0;
}