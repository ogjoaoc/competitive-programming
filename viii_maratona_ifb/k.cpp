#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {

    int c;
    cin >> c;
    cin.ignore();

    string t;
    int num;
    int tamanho;
    vector <int> v;

    getline(cin, t);
    istringstream iss(t);

    while (iss >> num) {
        v.push_back(num);
    }
    
    tamanho = v.size();
    for (int i = 0; i < tamanho; i++) {
        if (v.size() == 0)
            break;
        if (v[i] == v[i+1]){
            v.erase(v.begin());
            v.erase(v.begin());
        }
    }

    if (v.size() > 0) {
        cout << "Nao\n";
    } 

    else {
        cout << "Sim\n";
    }


    return 0;

}