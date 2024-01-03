#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int esquerda[MAX];
int direita[MAX];

int main() {

    int t, pares = 0;
    cin >> t;

    for (int i = 0; i < MAX; i++) {
        esquerda[i] = 0;
        direita[i] = 0;
    }

    while(t--) {
        int num;
        string L;
        cin >> num >> L;
        if (L == "D") {
            direita[num] += 1;
        }
        else {
            esquerda[num] += 1;
        }    
        }

    for (int j = 0; j < MAX; j++) {
        if (esquerda[j] < direita[j]) {
            pares += esquerda[j];
        }
        else {
            pares += direita[j];
        }
    }
    cout << pares << "\n";

    return 0;
}