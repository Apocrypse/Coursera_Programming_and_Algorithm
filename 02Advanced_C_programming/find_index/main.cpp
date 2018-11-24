#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int x[100];
    
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (i == x[i]) {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    
    if (!flag) cout << 'N' << endl;
    
    return 0;
}