#include <iostream>
using namespace std;

int main() {
    
    int n;
    int a[15000];
    
    while (true) {
        cin >> n;
        if (!n) break;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int med;
        if (n % 2) {
            med = a [n / 2];
        }
        else {
            med = (a[n / 2 - 1] + a[n / 2]) / 2;
        }
        cout << med << endl;
    }
    
    return 0;
}