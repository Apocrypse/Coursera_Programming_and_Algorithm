#include <iostream>
using namespace std;

int main() {
    
    int n;
    while (cin >> n) {
        bool flag = false;
        if (n % 3 == 0) {
            flag = true;
            cout << 3;
        }
        if (n % 5 == 0) {
            if (flag) cout << ' ';
            flag = true;
            cout << 5;
        }
        if (n % 7 == 0) {
            if (flag) cout << ' ';
            flag = true;
            cout << 7;
        }
        if (!flag) {
            cout << 'n';
        }
        cout << endl;
    }
    
    return 0;
}