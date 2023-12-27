// A. Perfect Permutation

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

     int t;
     vector <int> v;
     cin >> t;
     if (t % 2 == 0) {
        for (int i = 1; i <= t; i++) {
            v.push_back(i);
        }
        for (int j = 0; j < t; j = j + 2) {
            swap(v[j], v[j+1]);
        }
        for (int k = 0; k < t; k++) {
            cout << v[k] << " ";
        }
    } else {
        cout << "-1";
    }

    return 0;
}