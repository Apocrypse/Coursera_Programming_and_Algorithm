#include <iostream>
using namespace std;

int main() {
    
    double s = 27.0, e = 23.0, w = 1.2, r = 3.0;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        double tw, tr, d;
        cin >> d;
        tw = d / w;
        tr = s + d / r + e;
        if (tw == tr) cout << "All" << endl;
        else if (tw < tr)  cout << "Walk"<< endl;
        else cout << "Bike"<< endl;
    }
    
    return 0;    
}