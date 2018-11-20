#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int l, m;
    cin >> l >> m;
    
    if (m == 0) {
        int result = l + 1;
        cout << result << endl;
        return 0;
    }
    
    int start[100] = {0}, end[100] = {0};
    int cur_start, cur_end;
    cin >> cur_start >> cur_end;
    if (cur_end < cur_start) {
        int temp = cur_start;
        cur_start = cur_end;
        cur_end = temp;
    }
    
    start[0] = cur_start;
    end[0] = cur_end; 
    int cnt = 1;
    
    for (int i = 1; i < m; i++) {
        cin >> cur_start >> cur_end;
        if (cur_end < cur_start) {
            int temp = cur_start;
            cur_start = cur_end;
            cur_end = temp;
        }
        bool overlap = false;
        for (int j = 0; j < cnt; j++) {
            if ((cur_start <= end[j]) && (cur_end >= start[j])) {
                overlap = true;
                start[j] = min(cur_start, start[j]);
                end[j] = max(cur_end, end[j]);
                break;
            }
        }
        if (!overlap) {
            start[cnt] = cur_start;
            end[cnt] = cur_end;
            cnt++;
        }
    }
    
    int result = l + 1;
    for (int i = 0; i < cnt; i++) {
        result -= end[i] - start[i] + 1;
    }
    cout << result << endl;
    
    return 0;
}