#include <iostream>
using namespace std;

int n, m;
int Step[100][100] = {0};

void move(char map[][100], int row, int col, int step) {
    if (step >= Step[row][col]) {
        return;
    }
    
    Step[row][col] = step;
    if (map[row][col] == 'T') {
        return;
    }

    if ((map[row + 1][col] == '.' || map[row + 1][col] == 'T') && row + 1 < n) {
        move(map, row + 1, col, step + 1);
    }
    if ((map[row - 1][col] == '.' || map[row - 1][col] == 'T') && row - 1 >= 0) {
        move(map, row - 1, col, step + 1);
    }
    if ((map[row][col + 1] == '.' || map[row][col + 1] == 'T') && col + 1 < m) {
        move(map, row, col + 1, step + 1);
    }
    if ((map[row][col - 1] == '.' || map[row][col - 1] == 'T') && col - 1 >= 0) {
        move(map, row, col - 1, step + 1);
    }
}

int main()
{
    cin >> n >> m;

    int startRow = 0, startCol = 0;
    int endRow = 0, endCol = 0;
    char map[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'S') {
                startRow = i;
                startCol = j;
            }
            if (map[i][j] == 'T') {
                endRow = i;
                endCol = j;
            }
            Step[i][j] = 999999;
        }
    }

    move(map, startRow, startCol, 0);

    cout << Step[endRow][endCol] << endl;
    return 0;
}