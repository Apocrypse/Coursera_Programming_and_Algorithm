#include <iostream>
using namespace std;

int main() {
    
    int oddMax = -9999, evenMin = 9999;
    
    for (int i = 0; i < 6; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            if (num < evenMin) evenMin = num;
        }
        else {
            if (num > oddMax) oddMax = num;
        }
    }
    
    if (oddMax > evenMin) cout << oddMax - evenMin << endl;
    else cout << evenMin - oddMax << endl;
    
    return 0;
}