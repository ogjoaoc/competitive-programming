#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
int main() {
 
    int t, num;
    vector <int> v;
    cin >> t;
    t = t*2;
 
    for (int i = 0; i < t; i++) {
        cin >> num;
        if (v.size() == 0) {
            v.push_back(num);
        }
        else {
            if(num == v.back()) {
                v.pop_back();
            }
            else {
                v.push_back(num);
            }
        }
    }
 
    if (v.size() > 0) {
        cout << "Nao" << endl;
    }
 
    else {
        cout << "Sim" << endl;
    }
    
 
    return 0;
 
}