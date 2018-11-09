#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    
    int cnt1 = 0, cnt5 = 0, cnt10 = 0;
    int n;
    for (int i = 0; i < k; i++) {
        cin >> n;
        if (n == 1) cnt1 += 1;
        else if (n == 5) cnt5 += 1;
        else if (n == 10) cnt10 += 1;
    }
    
    cout << cnt1 << endl;
    cout << cnt5 << endl;
    cout << cnt10 << endl;
    
    return 0;
}
