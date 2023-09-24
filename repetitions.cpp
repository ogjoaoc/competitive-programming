#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    int cnt = 0;
    int max = 0;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.length(); i++) {
        v.push_back(s[i]);
    }

    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] == v[i+1]) {
            cnt += 1;
            if (cnt >= max) {
                max = cnt;
            }
        }
        else if (v[i] != v[i+1])
        {
            cnt = 0;
        }  
    }
    cout << max + 1 << endl;
}