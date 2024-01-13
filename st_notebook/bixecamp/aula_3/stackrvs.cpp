// using a stack DS to arr reversing.

#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {

    long long n;
    stack<int> s;
    cin >> n;

    for(int i=0; i<n; i++) {
        int t; cin >> t;
        s.push(t);
    }

    for(int i=0; i<n; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0; 

}