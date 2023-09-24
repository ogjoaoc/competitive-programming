#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    vector<long long int> v;
    v.push_back(n);

    while(1) {
        if (n == 1) {
            break;
        }
        else {
            if (n % 2 == 0) {
                n = n / 2;
                v.push_back(n);
            }
            else {
                n = 3 * n + 1;
                v.push_back(n);
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
}