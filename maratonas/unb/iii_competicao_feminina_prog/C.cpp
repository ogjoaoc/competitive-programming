#include <bits/stdc++.h>
using namespace std;


float dist(int x1, int y1, int x2, int y2) {
    float ans = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return ans;
}

 
int main() {

    int x1, y1;
    int x2, y2;
    int r;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> r;

    cout << dist(x1,y1,x2,y2) << "\n";

    if (dist(x1, y1, x2, y2) <= 2*r) {
        cout << "SIM\n";
    } else {
        cout << "NAO\n";
    }





    return 0;
}