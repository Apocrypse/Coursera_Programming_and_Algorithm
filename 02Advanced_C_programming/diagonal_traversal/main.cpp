#include <iostream>
using namespace std;

int main() {
    
    int a[200][200];
    int m, n;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int s = 0; s <= m + n - 2; s++) {
        for (int i = 0; i <= s; i++) {
            int j = s - i;
            if (i >= m) break;
            if (j >= n) continue;
            cout << a[i][j] << endl;
        }
    }
    
    return 0;
}