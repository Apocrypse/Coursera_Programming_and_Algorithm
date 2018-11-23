#include <iostream>
using namespace std;

int main() {
    
    int y;
    cin >> y;
    
    if (y % 3200 == 0) {
        cout << 'N' << endl;
    }
    else if (y % 400 == 0) {
        cout << 'Y' << endl;
    }
    else if (y % 100 == 0) {
        cout << 'N' << endl;
    }
    else if (y % 4 == 0) {
        cout << 'Y' << endl;
    }
    else {
        cout << 'N' << endl;
    }
    
    return 0;
}