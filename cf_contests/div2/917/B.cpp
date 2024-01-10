#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {

    int t;
    cin >> t;

    while (t--) {

        long long l; 
        cin >> l;
        int aux = 0;

        string s;
        cin >> s;
        set <char> my_set;

        for (int i = 0; i < l; i++) {
            my_set.insert(s[i]);
            aux += my_set.size();
        }
        cout << aux << "\n";
 
    }


    return 0;
}