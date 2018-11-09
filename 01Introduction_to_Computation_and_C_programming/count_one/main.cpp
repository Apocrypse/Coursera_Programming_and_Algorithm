#include <iostream>
using namespace std;

int main() {
    
    int k;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        int num, ans = 0;
        cin >> num;
        while (num > 0) {
            ans += num % 2;
            num /= 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}
