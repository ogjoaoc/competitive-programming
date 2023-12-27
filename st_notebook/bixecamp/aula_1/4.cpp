#include <bits/stdc++.h>
using namespace std;

int main() {

    int64_t t = 1;
    int64_t maior = 0;

    while (t != 0) {

        cin >> t;
        if (t > maior) 
        maior = t;
    }
    
    cout << maior << "\n";

    return 0;
}