// O(logn) binary search

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define MAXN 100100
const int INF = (int)1e9;


vector<int> vetor(MAXN);
int n;

int buscab(int x) {

    int l, r, mid;
    l = 0;
    r = n-1;

    while (l <= r) {

        mid = (l+r)/2;
        if (vetor[mid] == x) {
            return mid;
        }
        
        if (x < mid) {
            r = mid-1;
        }
        if (x > mid) {
            l = mid+1;
        }

    }

    return -1;

}

int main() 
{ _

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    cout << buscab(7) << "\n";
  
    return 0;
}

