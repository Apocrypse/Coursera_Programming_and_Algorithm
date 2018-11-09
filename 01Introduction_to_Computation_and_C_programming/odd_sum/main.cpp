#include <iostream>
using namespace std;

int main() {
    
    int m, n, result;
    cin >> m >> n;
    
    if (m % 2 == 0) {
        m += 1;
    }
    if (n % 2 == 0) {
        n -= 1;
    }
    
    if (m > n) {
        cout << 0;
    }
    else {
        int a, b;
        a = (m + n) / 2;
        b = (n - m) / 2 + 1;
        result = a * b;
        cout << result << endl;
    }
    
    return 0;
}