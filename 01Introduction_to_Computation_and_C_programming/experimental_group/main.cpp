#include <iostream>
using namespace std;

int main() {
    
    int n;
    int id[100];
    double rate[100];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int init, fin;
        cin >> id[i] >> init >> fin;
        rate[i] =  (double) fin / init;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (rate[j + 1] > rate[j]) {
                int tmpId = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmpId;
                double tmpRate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmpRate;
            }
        }
    }
    
    double maxDiff = 0;
    int maxDiffInd = 0;
    for (int i = 0; i < n - 1; i++) {
        double diff = rate[i] - rate[i + 1];
        if (maxDiff < diff) {
            maxDiff = diff;
            maxDiffInd = i;
        }
    }
    
    cout << maxDiffInd + 1 << endl;
    for (int i = maxDiffInd; i >= 0; i--) {
        cout << id[i] << endl;
    }
    
    cout << n - maxDiffInd - 1 << endl;
    for (int i = n - 1; i >= maxDiffInd + 1; i--) {
        cout << id[i] << endl;
    }
    
    return 0;
}