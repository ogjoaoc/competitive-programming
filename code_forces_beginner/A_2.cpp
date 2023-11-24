#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main () {

    int t;
    vector <int> v;
    int cnt = 1;
    for (int i = 0; i < 3; i++) {
        cin >> t;
        if (v.empty()) {
            v.push_back(t);
        }

        else {
            if (v.back() == t) {
                cnt++;                
            }
        } 
        
    }

    cout << cnt;



    return 0;
}