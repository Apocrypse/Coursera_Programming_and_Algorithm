#include <iostream>
using namespace std;

int main() {
    
    int a[3];
    int num;
    cin >> num;
    
    for (int i = 0; i < 3; i++) {
        int digit = num % 10;
        num /= 10;
        a[2-i] = digit;
    }
    
    for (int i = 0; i < 3; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}