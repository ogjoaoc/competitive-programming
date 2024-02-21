// Bubble Sort
// O(n^2) ~10^4 in

#include <bits/stdc++.h>

using namespace std;

void bubble(vector<int> &v) {

    int ordenado = 0;

    while (!ordenado) {

        ordenado = 1;
        for (int i = 0; i < (int)v.size()-1; i++) {

            if (v[i] > v[i+1]) {
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                ordenado = 0;
            }

        }

    }

}

int main() {

    vector<int> v = { 5, 2, 9, 21, 1, 0, 7 };

    bubble(v);

    for (auto e : v) {
        cout << e << " ";
    }

    cout << "\n";

    return 0;

}