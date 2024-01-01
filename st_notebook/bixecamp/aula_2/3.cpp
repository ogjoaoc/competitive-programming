#include <bits/stdc++.h>
using namespace std;
 

int stringVerif(string s) {

    if (s[s.length()-1] == 'o' && s[s.length()-2] == 'p') {
        return 1;
    }
    else if (s[s.length()-1] == 'u' && s[s.length()-2] == 's' && s[s.length()-3] == 'a' && s[s.length()-4] == 'm') {
        return 2;
    }
    else if (s[s.length()-1] == 'u' && s[s.length()-2] == 's' && s[s.length()-3] == 'e' && s[s.length()-4] == 'd') {
        return 2;
    }
    else {
        return 3;
    }

    return 0;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        if (stringVerif(s) == 1) {
            cout << "FILIPINO" << "\n";
        }
        else if (stringVerif(s) == 2) {
            cout << "JAPANESE" << "\n";
        }
        else {
            cout << "KOREAN" << "\n";
        }

    }

    return 0;
}