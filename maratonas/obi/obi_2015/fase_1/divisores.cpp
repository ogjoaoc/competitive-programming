#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
        int total = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                total++;
            }
        }

        cout << total << "\n";

    return 0;

}