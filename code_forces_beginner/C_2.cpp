#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t, n;
    string b;
    cin >> t;
    string remove = "()";

    for (int i = 0; i < t; i++) {

        cin >> n;
        cin >> b;
    
        size_t pos = string::npos;
        while ((pos = b.find("()")) != string::npos) {
            b.erase(pos, remove.length());
        }

        cout << b.length()/2 << "\n";

    }
    return 0;
}