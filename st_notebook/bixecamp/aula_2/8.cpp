#include <bits/stdc++.h>
using namespace std;

const int MAX = 91;

int main() {
    while(1) {
        int N, B;
        cin >> N >> B;
        if (N == 0 && B == 0) break;
        
        int v[MAX];
        set <int> ms;

        for(int i = 0; i < B; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < B-1; i++) {
            for (int j = i+1; j < B; j++) {
                ms.insert(abs(v[i]-v[j]));
            }
        }

        if (ms.size() == N) {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }

    }

    return 0;
}