#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, v = "";
    cin >> s;
    int new_len = 0, len = s.length();
    bool engracada = true;

    for (int i = 0; i < len; i++) {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) {
            v += s[i];
            new_len++;
        }
    }

    for(int j = 0; j < new_len; j++) {
        if (v[j] != v[new_len-1-j]) {
            engracada = false;
        }
    }

    if (engracada) {
        cout << "S" << "\n";
    } else {
        cout << "N" << "\n";
    }


    return 0;
}