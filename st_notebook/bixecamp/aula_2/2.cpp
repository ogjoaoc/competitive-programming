#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int m[N][N];

int main() {

    int n;
    bool not_perfect = false;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            m[i][j] = t;
        }
    }

    int current_sum = 0, perfect_sum = 0;
    
    // linhas 
    
    for (int i = 0; i < n; i++) {
        current_sum = 0;
        for (int j = 0; j < n; j++) {
            current_sum += m[i][j];
        }
        if (i == 0) {
            perfect_sum = current_sum;
        }
        if (perfect_sum != current_sum) {
            cout << "-1" << "\n";
            not_perfect = true;
            break;
        }
    }

    // colunas 

    current_sum = 0;
    
    for (int j = 0; j < n; j++) {
        current_sum = 0;
        for (int i = 0; i < n; i++) {
            current_sum += m[i][j];        
        }
        if (perfect_sum != current_sum && !not_perfect) {
            cout << "-1" << "\n";
            not_perfect = true;
            break;
        }
    }

    // diagonais

    current_sum = 0;
    for (int i = 0; i < n; i++) {
        current_sum += m[i][i];
    }
    if (perfect_sum != current_sum && !not_perfect) {
        cout << "-1" << "\n";
        not_perfect = true;
        
    }

    current_sum = 0;
    for (int j = 0; j < n; j++) {
        current_sum += m[j][n-1-j];
    }
    if (perfect_sum != current_sum && !not_perfect) {
        cout << "-1" << "\n";
        not_perfect = true;
    }

    if (!not_perfect) {
        cout << perfect_sum << "\n";
    }

    return 0;
}