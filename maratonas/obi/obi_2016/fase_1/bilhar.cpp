#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    map <int, bool> fabricados;

    int total = 0;

    for (int i = 0; i < n ; i++) {

        int taco;
        cin >> taco;

        if (!fabricados[taco]) {
            total += 2;
            fabricados[taco] = true;
        } else {
            fabricados[taco] = false;
        }
 
    }

    cout << total << "\n";


    return 0;

}