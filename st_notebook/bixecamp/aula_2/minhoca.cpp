// Matrizes - Introdução https://br.spoj.com/problems/MINHOCA/ 

#include <bits/stdc++.h>
using namespace std;

// const int L = 105;
// const int C = 105;
// int m[L][C];

int main() {

    int l, c;
    cin >> l >> c;
    int m[l][c];
    int maior_coluna = 0, maior_linha = 0, contador = 0;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            int t;
            cin >> t;
            m[i][j] = t;
        }
    }

    for (int i = 0; i < l; i++) {
        contador = 0;
        for (int j = 0; j < c; j++) {
            contador += m[i][j];
        }
        if (contador > maior_linha) maior_linha = contador;
    }

    contador = 0;

    for(int j = 0; j < c; j++) {
        contador = 0;
        for (int i = 0; i < l; i++) {
            contador += m[i][j];
        }
        if (contador > maior_coluna) maior_coluna = contador;
    }

    if (maior_coluna > maior_linha) {
        cout << maior_coluna << "\n";
    }
    else {
        cout << maior_linha << "\n";
    }

    return 0;
}