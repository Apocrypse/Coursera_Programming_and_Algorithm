#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char slash;
    cin >> a >> slash >> b >> slash >> c;
    
    if (a + b == c) cout << '+' << endl;
    else if (a - b == c) cout << '-' << endl;
    else if (a * b == c) cout << '*' << endl;
    else if (a / b == c) cout << '/' << endl;
    else if (a % b == c) cout << '%' << endl;
    else cout << "error" << endl;
    
    return 0;
}