#include <iostream>
using namespace std;

int main() {
    
    int a[100][100];
    int k;
    cin >> k;
    
    for (int l = 0; l < k; l++) {
        int result = 0;
        int m, n;
        cin >> m >> n;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    result += a[i][j];
                }
            }
        }
        cout << result << endl;
    }
    
    return 0;
}