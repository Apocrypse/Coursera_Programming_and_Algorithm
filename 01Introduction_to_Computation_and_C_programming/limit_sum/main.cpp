#include <iostream>
using namespace std;

int main() {
    
    int lim;
    cin >> lim;
    
    int s = 0;
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        if (num < lim) {
            s += num;
        }
    }
    cout << s << endl;
    
    return 0;    
}