#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double cor[100][2];
    for (int i = 0; i < n; i++) {
        cin >> cor[i][0] >> cor[i][1];
    }
    
    double dis2 = -0.0, cur_max = -0.0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            dis2 = pow(cor[i][0] - cor[j][0], 2) + pow(cor[i][1] - cor[j][1], 2);
            cur_max = max(cur_max, dis2);
        }
    }
    cout << fixed << setprecision(4) << sqrt(cur_max) << endl;
    
    return 0;
}