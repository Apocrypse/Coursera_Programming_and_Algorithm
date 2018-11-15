#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 10; i <= n; i++) {
        int d = i / 10 + i % 10;
        if (!(i % d)) {
            cout << i << endl;
        }
    }
    
    return 0;
}