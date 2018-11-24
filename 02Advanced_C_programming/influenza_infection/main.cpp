#include <iostream>
using namespace std;

int main() {
    
    char rooms[100][100];
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> rooms[i][j];
            if (rooms[i][j] == '@') cnt++;
        }
    }
    
    int m;
    cin >> m;
    for (int d = 1; d < m; d++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == '@') {
                    if (i != 0 && rooms[i - 1][j] == '.') rooms[i - 1][j] = '!';
                    if (i != n && rooms[i + 1][j] == '.') rooms[i + 1][j] = '!';
                    if (j != 0 && rooms[i][j - 1] == '.') rooms[i][j - 1] = '!';
                    if (j != n && rooms[i][j + 1] == '.') rooms[i][j + 1] = '!';
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == '!') {
                    rooms[i][j] = '@';
                    cnt++;
                }
            }
        }
    }
    //for (int i = 0; i < n; i++) {
        //cout << rooms[i] << endl;
    //}
    cout << cnt << endl;
    
    return 0;
}