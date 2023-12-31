// https://br.spoj.com/problems/FREQUE12/
// O(n^2) solution :( 

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000008;
int v[MAX];

int main() {

    int r;
    cin >> r;
    int qtd = 0;
    bool apareceu = false;

    for (int i = 0; i < r; i++) {
        int n;
        cin >> n;
        v[i] = n;
        for (int j = 0; j < qtd; j++) {
            if (v[j] == n) {
                apareceu = true;
            }
        }
        if (!apareceu) {
            qtd++;
        }
    }

    cout << qtd << "\n";

    return 0;
}