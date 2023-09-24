#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n, sumv;
    cin >> n;
    int a;
    vector<long long int> v(n);
    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
    }

    sumv = 0;
    for (int i = 0; i < n; i++) {
        sumv += v[i];
    }

    a = n * (n + 1) / 2 - sumv;
    cout << a << endl;


}