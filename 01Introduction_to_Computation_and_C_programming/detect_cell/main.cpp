#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int cells[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cells[i][j];
        }
    }
    
    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if ((cells[i - 1][j] - cells[i][j] >= 50) && (cells[i][j - 1] - cells[i][j] >= 50) &&
                (cells[i + 1][j] - cells[i][j] >= 50) && (cells[i][j - 1] - cells[i][j] >= 50)) {
                    cnt++;
                }
        }
    }
    
    cout << cnt << endl;
    return 0;    
}