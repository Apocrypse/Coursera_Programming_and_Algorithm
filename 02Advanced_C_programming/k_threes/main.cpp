#include <iostream>
using namespace std;

int main() {
    int m, k;
    cin >> m >> k;
    
    if (m % 19 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    int cnt = 0;
    while (m != 0) {
        int d;
        d = m % 10;
        m /= 10;
        if (d == 3) {
            cnt++;
        }
    }
    if (cnt == k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
