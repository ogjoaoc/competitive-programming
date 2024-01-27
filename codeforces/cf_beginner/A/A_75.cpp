#include <bits/stdc++.h>
using namespace std;


int remove_zeros(int num) {

    int ten = 1;
    int num_no_zero = 0;
    while (num != 0) {
        
        if (num % 10 != 0) {
            num_no_zero += (num % 10) * ten;
            ten *= 10;
        } 
        num /= 10;
    }
    return num_no_zero;
}

int main() {

    int a, b;
    cin >> a >> b;

    int sum = a + b;

    a = remove_zeros(a);
    b = remove_zeros(b);
    int new_sum = a + b;
    
    if (remove_zeros(sum) == new_sum) {
        cout << "YES\n";
    } else cout << "NO\n";
    
    return 0;
}