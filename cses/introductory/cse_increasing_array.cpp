#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main () {

    int n, j, dif;
    int count = 0;
    vector<int> v;

    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> j;
        v.push_back(j);
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > v[i+1]) {
            dif = v[i] - v[i+1];
            v[i+1] = dif;
            count += dif;
        }
    }

    cout << count << endl;


    return 0;

}