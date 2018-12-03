#include <iostream>
using namespace std;

int main() {
    
    int m, n;
    cin >> m >> n;
    int mount[20][20];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mount[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 || mount[i][j] >= mount[i - 1][j]) &&
                (i == m - 1 || mount[i][j] >= mount[i + 1][j]) &&
                (j == 0 || mount[i][j] >= mount[i][j - 1]) &&
                (j == n - 1 || mount[i][j] >= mount[i][j + 1])) {
                    cout << i << ' ' << j << endl;
                }
        }
    }
    
    return 0;
}
