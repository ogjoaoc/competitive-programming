#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main () {

    int t;
    vector <int> v;
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        cin >> t;
        if (v.empty()) {
            v.push_back(t);
        }

        else {
            if (find(v.begin(), v.end(), t) != v.end()) {
                cnt++;                
            }
            else {
                v.push_back(t);
            }
        } 
        
    }

    cout << cnt;


    return 0;
}