// TLE

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int m[MAX][MAX];

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int t;
            cin >> t;
            m[i][j] = t;
        }
    }

    int max = 0;
    int sum;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum = 0;
            int temp = m[i][j];
            for (int k = 0; k < N; k++) {
                sum += m[i][k];
                sum += m[k][j];
            }
            sum -= 2*temp;
            if (sum > max) {
            max = sum;
        }
        }
    }

    cout << max << "\n";

    return 0;
}