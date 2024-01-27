// A. Boy or Girl

#include <bits/stdc++.h>

using namespace std;

int main() {

    string t;
    char letter;
    int sz;
    cin >> t;

    set<char> my_set(t.begin(), t.end());
    sz = my_set.size();

    if (sz % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}
