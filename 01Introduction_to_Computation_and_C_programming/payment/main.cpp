#include <iostream>
using namespace std;

int main() {
    
    int amt;
    cin >> amt;
    
    cout << amt / 100 << endl;
    amt %= 100;
    
    cout << amt / 50 << endl;
    amt %= 50;

    cout << amt / 20 << endl;
    amt %= 20;

    cout << amt / 10 << endl;
    amt %= 10;
    
    cout << amt / 5 << endl;
    amt %= 5;
    
    cout << amt << endl;
    
    return 0;
}
