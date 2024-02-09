#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n; cin >> n;
    bool firme = false;
    long long num;

    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            num = num / 2;
        }

        int cartas = num-1 + num*2;
        if (cartas == n) {
            firme = true;
        }
        num++;
    }


    return 0;
}