#include <bits/stdc++.h>
// with error
using namespace std;

int main() {
    
    int t;
    cin >> t;
    int i = 0;
    while (i < t){
        long int n;
        int count = 0;
        cin >> n;
        while (n != 1 and count < 200) {
            if (n % 6 == 0) {
                n = n / 6; 
                count += 1;
            }
            else {
                n = n*2;
                count += 1;
            }
        }
        i += 1;
        if (count != 100) {
            cout << int(count)<< endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}