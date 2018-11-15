#include <iostream>
using namespace std;

int main() {
    
    int A[1000];
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        A[i] = num;
    }
    
    bool find = false;
    for (int i = 0; i < n; i++) {
        if (find) break;
        for (int j = i + 1; j < n; j++) {
            if (find) break;
            if (A[i] + A[j] == k) {
                find = true;
            }
        }
    }
    
    if (find) cout << "yes" << endl;
    else cout << "no" << endl;
    
    return 0;    
}