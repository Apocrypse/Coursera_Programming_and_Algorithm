#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int m, n;
    cin >> m >> n;
    if (m < 0 || m > 4 || n < 0 || n > 4) {
        cout << "error" << endl;
    }
    else {
        int temp[5];
        for (int j = 0; j < 5; j++) {
            temp[j] = matrix[m][j];
            matrix[m][j] = matrix[n][j];
            matrix[n][j] = temp[j];
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
