// String based solution (bad for sure)

#include <bits/stdc++.h>
using namespace std;

int main() {

    string t;
    cin >> t;
    bool flag = false;
    int lc = 0;

    for (int i = 0; i < t.length(); i++) {
        if (t.length() == 1)
        break;

        if (t[i] == '7' or t[i] == '4') 
        lc++;
        }

    if (lc > 0)
    flag = true;

    if (flag) {
        if (lc == 7 || lc == 4)
        cout << "YES" << "\n";
        else
        cout << "NO" << "\n";
    }
    else
    cout << "NO" << "\n";

    return 0;
}