// got help from https://pt.stackoverflow.com/questions/355464/algoritmo-para-solu%C3%A7%C3%A3o-de-fuga-com-helic%C3%B3ptero

#include <bits/stdc++.h>
using namespace std;

int main() {

    int H, P, F, S;
    cin >> H >> P >> F >> S;
    int h, p;

    h = (H-F)/S;
    p = (P-F)/S;

    if (h < 0) h += 16;
    if (p < 0) p += 16;

    if (h < p) cout << "S" << "\n";
    else cout << "N" << "\n";

    return 0;
}