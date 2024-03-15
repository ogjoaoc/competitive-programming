#include <bits/stdc++.h>
 
using namespace std; 

int eh_composto[10000007]; // 1 (true) = composto

void crivo(int x){
    eh_composto[1] = 1;
    if(!eh_composto[x]) { 
        for(int i=2; i<=x; i++) {
            if(!eh_composto[i]) { 
                for(int j=2; j*i <= x; j++) {
                    eh_composto[i*j] = 1;
                } 
            }
        }
    }
    return;
}
 
int main() 
{ 
    int n; 
    cin >> n;
    crivo(n);
    for(int i=1; i<=n; i++){
        if(!eh_composto[i]){
            cout << i << " "; 
        }
    }
    cout << "\n";
    return 0;
}