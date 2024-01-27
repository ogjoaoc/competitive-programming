#include <bits/stdc++.h>
using namespace std;

int main() {

    string s; cin >> s;
    int len = s.length();
    int upper = 0, lower = 0;
    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) upper++;
        else lower++;
    }
    if (upper > lower) {
        for (int i = 0; i < len; i++) {
            char ch = toupper(s[i]);
            cout << ch;
        }
        cout << "\n";
    } else {
        for (int i = 0; i < len; i++) {
            char ch = tolower(s[i]);
            cout << ch;
        }
        cout << "\n";
    }


    return 0;
}