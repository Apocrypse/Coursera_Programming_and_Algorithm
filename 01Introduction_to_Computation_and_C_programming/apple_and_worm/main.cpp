#include <iostream>
using namespace std;

int main() {
    
    int n, x, y;
    cin >> n >> x >> y;
    
    int t = 0;
    while (t < y && n > 0) {
        t += x;
        n -= 1;
    }
    cout << n << endl;
    
    return 0;
}