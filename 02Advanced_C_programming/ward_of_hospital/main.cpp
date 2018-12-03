#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int n;
    float a;
    cin >> n >> a;
    
    int idx[50];
    float level[50];
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> idx[i] >> level[i];
        if (level[i] >= a) {
            flag = true;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (level[j + 1] > level[j]) {
                int tempIdx = idx[j];
                idx[j] = idx[j + 1];
                idx[j + 1] = tempIdx;
                double tempLevel = level[j];
                level[j] = level[j + 1];
                level[j + 1] = tempLevel;
            }
        }
    }
    
    if (!flag) {
        cout << "None." << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (level[i] < a) break;
        cout << setfill('0') << setw(3) << idx[i] << ' ' << fixed << setprecision(1) << level[i] << endl;
    }
    return 0;
}