#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int maxS = 0;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (s > maxS) {
            maxS = s;
        }
    }
    cout << maxS << endl;
    
    return 0;
}