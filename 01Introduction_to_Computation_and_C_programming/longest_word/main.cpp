#include <iostream>
using namespace std;

int main() {
    
    char s[500];
    cin.get(s, 500, '.');
    
    int cur_cnt = 0, max_cnt = 0, i = 0, end = 0;
    while (i < 500 && s[i] != '\0') {
        
        if (s[i] == ' ') {
            if (cur_cnt > max_cnt) {
                max_cnt = cur_cnt;
                end = i;
            }
            cur_cnt = 0;
        }
        else {
            cur_cnt++;
        }
        i++;
    }
    if (cur_cnt > max_cnt) {
        max_cnt = cur_cnt;
        end = i;
    }
    
    for (int j = end - max_cnt; j < end; j++) {
        cout << s[j];
    }
    cout << endl;
    
    return 0;
}