#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double stat[3][3] = {0};
    
    for (int i = 0; i < 3; i++) {
        int id, n;
        cin >> id >> n;
        for (int j = 0; j < n; j++) {
            char type;
            double num;
            cin >> type >> num;
            switch (type) {
                case 'A': stat[id - 1][0] += num; break;
                case 'B': stat[id - 1][1] += num; break;
                case 'C': stat[id - 1][2] += num; break;
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        cout << i+1 << " ";
        cout << fixed << setprecision(2) << stat[i][0] + stat[i][1] + stat[i][2] << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << (char)(i+65) << " ";
        cout << fixed << setprecision(2) << stat[0][i] + stat[1][i] + stat[2][i] << endl;
    }
    
    return 0;
}