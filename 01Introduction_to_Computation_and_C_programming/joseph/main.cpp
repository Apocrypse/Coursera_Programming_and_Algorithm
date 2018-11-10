#include <iostream>
using namespace std;

int succ[300];
int pred[300];

int main() {
    
    int n, m;
    
    while (true) {
        
        cin >> n >> m;
        
        if (n == 0 && m == 0) break;
        
        for (int i = 0; i < n - 1; i++) {
            succ[i] = i + 1;
            pred[i + 1] = i;
        }
        succ[n - 1] = 0;
        pred[0] = n - 1;
        
        int cur = 0;
        while (true) {
            for (int cnt = 0; cnt < m -1; cnt++) {
                cur = succ[cur];
            }
            int pre = pred[cur];
            int suc = succ[cur];
            succ[pre] = suc;
            pred[suc] = pre;
            if (pre == suc) {
                cout << pre + 1 << endl;
                break;
            }
            
            cur = suc;
            
        }
    }
    
    
    return 0;
    
}