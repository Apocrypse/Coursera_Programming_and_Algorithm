#include <iostream>
using namespace std;

int odd(int n) {
    
    int result;
    result = n * 3 + 1;
    cout << n << '*' << 3 << '+' << 1 << '=' << result << endl;
    return result;
}

int even(int n) {
    
    int result;
    result = n / 2;
    cout << n << '/' << 2 << '=' << result << endl;
    return result;
}

int main() {
    
    int n;
    cin >> n;
    
    while (n != 1) {
        if (n % 2 == 1) n = odd(n);
        else n = even(n);
    }
    cout << "End" << endl;
    
    return 0;
}