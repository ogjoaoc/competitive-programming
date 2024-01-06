// i got the right logic to find the sum of i & j from each tower position
// but failed while using two aux arrays to separate i & j sum's causing On^2.
// using two arrays to store 
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1100;
int m[MAX][MAX], l[MAX], c[MAX];

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> m[i][j];
            l[i] += m[i][j];
            c[j] += m[i][j];
        }
    }

    int maxm = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            maxm = max(maxm, l[i] + c[j] - 2 * (m[i][j]));
        }
    }

    cout << maxm << "\n";

    return 0;
}