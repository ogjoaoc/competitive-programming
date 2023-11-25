// A. Team

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main () {

    int n;
    int a, b, c;
    int count = 0;
    int i = 0;

    cin >> n;

    
    while (i < n) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 1 && b == 1 && c == 0) {
            count += 1;
        }
        if (a == 1 && c == 1 && b == 0) {
            count += 1;
        }
        if (b == 1 && c == 1 && a == 0) {
            count += 1;
        }
        if (b == 1 && c == 1 && a == 1) {
            count += 1;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}