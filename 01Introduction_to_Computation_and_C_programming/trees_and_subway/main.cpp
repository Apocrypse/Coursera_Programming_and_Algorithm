#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int l, m;
    cin >> l >> m;
    int r[10000] ={0};
    
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        for (int j = s; j <= e; j++) {
            r[j] = 1;
        }
    }
    
    int result = 0;
    for (int i = 0; i <= l; i++) {
        if (r[i] == 0) {
            result++;
        }
    }
    cout << result << endl;
    
    return 0;
}