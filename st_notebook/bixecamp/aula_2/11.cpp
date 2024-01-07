#include <bits/stdc++.h>
using namespace std;

const int MAX = 10010;

int main() {

    int v[MAX];
    int ans[MAX];
    int n, cnt = 0, cnt_reverse = 0;
    bool found_zero_reverse = false, found_zero = false;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        cnt = 0;
        cnt_reverse = 0;
        for (int j = i; j < n; j++) {
            if (v[j] != 0 && v[i] != 0) {
                cnt++;
            }
            else if (v[i] == 0) {
                cnt = 0;
            }
            else if (v[j] == 0) {
                found_zero = true;
                break;
            }
        }

        for (int j = i; j > -1; j--) {
            if (v[j] != 0 && v[i] != 0) {
                cnt_reverse++;
            }
            else if (v[i] == 0) {
                cnt_reverse++;
            }
            else if (v[j] == 0) {
                found_zero_reverse = true;
                break;
            }
        }

        if ((cnt < cnt_reverse) || (found_zero)) {
            ans[i] = cnt;
        }
        else if ((cnt_reverse < cnt)) {
            ans[i] = cnt_reverse;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }


    return 0;
}