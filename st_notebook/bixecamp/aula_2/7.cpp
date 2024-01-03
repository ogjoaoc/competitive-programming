// Notes

// If you have the input "1234" and i = 0, this means that the string "1234" will be read and each character
// will be assigned to m[0][0], m[0][1], m[0][2], and m[0][3] in a char matrix.

// Using ASCII, for digits from 0 to 9, it is possible to convert them to int by simply subtracting
// the char '0'. https://pt.stackoverflow.com/questions/3760/o-que-acontece-em-uma-convers%C3%A3o-de-um-char-para-um-int

#include <bits/stdc++.h>
using namespace std;

const int N = 4;

int main() {

    char m[N][N];

    int k;
    cin >> k;
    bool able = true;
    k = k*2;
    int count[10] = { 0 };

    for (int i = 0; i < N; i ++) {
        cin >> m[i]; 
        for (int j = 0; j < N; j++) {
            if (m[i][j] != '.') {
                count[m[i][j] - '0']++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > k) {
            able = false;
        }
    }

    if (able) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}