// https://br.spoj.com/problems/FREQUE12/
// O(n) solution :)
// using table (boolean array)  [0, 0, 0, 0, 0, 1, 1, 0, 0, ...]

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000008;
bool v[MAX];

int main() {

    int r;
    int qtd = 0;
    cin >> r;
    
    for (int i = 0; i < MAX; i++) {
        v[i] = false;
    }

    for (int i = 0; i < r; i++) {
        int n;
        cin >> n;
        if (v[n] == false) {
            v[n] = true;
            qtd++;
        }
    }

    cout << qtd << "\n";

}