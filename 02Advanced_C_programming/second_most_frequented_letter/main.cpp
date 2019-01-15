#include <iostream>
using namespace std;

int main() {
    char words[500];
    cin >> words;
    
    int cnt[26] = {0};
    for (int i = 0; words[i] != '\0'; i++) {
        int ind;
        if (words[i] >= 'a' && words[i] <= 'z') {
            ind = words[i] - 'a';
            cnt[ind]++;
        }
        else if (words[i] >= 'A' && words[i] <= 'Z') {
            ind = words[i] - 'A';
            cnt[ind]++;
        }
    }
    
    int cur_ind_1, cur_ind_2, cur_cnt_1 = 0, cur_cnt_2 = 0;
    for (int i = 0; words[i] != '\0'; i++) {
        int j;
        if (words[i] >= 'a' && words[i] <= 'z') {
            j = words[i] - 'a';
        }
        else if (words[i] >= 'A' && words[i] <= 'Z') {
            j = words[i] - 'A';
        }
        if (cnt[j] > cur_cnt_1) {
            cur_cnt_2 = cur_cnt_1;
            cur_ind_2 = cur_ind_1;
            cur_cnt_1 = cnt[j];
            cur_ind_1 = j;
        }
        else if (cnt[j] < cur_cnt_1 && cnt[j] > cur_cnt_2) {
            cur_cnt_2 = cnt[j];
            cur_ind_2 = j;
        }
    }
    cout << char('A'+cur_ind_2) << '+' << char('a'+cur_ind_2) << ':' << cur_cnt_2 << endl;
    
    return 0;
}