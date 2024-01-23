#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {

        long long x, y; cin >> x >> y;
        long long a, b; cin >> a >> b;
        long long cnt_a = 0, cnt_b = 0;

        if (x > y) {
            while (x != y) {
                x--;
                cnt_a++;
            }
            while (x == y && (x + y) != 0) {
                x--; y--;
                cnt_b++;
            }
            cout << (cnt_a*a + cnt_b*b) << "\n";

        } else if (x < y) {
            while (x != y) {
                y--;
                cnt_a++;
            }
            while (x == y && (x + y) != 0) {
                x--; y--;
                cnt_b++;
            }
            cout << (cnt_a*a + cnt_b*b) << "\n";
        } else {
            cout << "0" << "\n";
        }


    }



    return 0;
}