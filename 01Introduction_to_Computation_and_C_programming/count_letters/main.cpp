#include <iostream>
using namespace std;

int main() {
    
    char c[80];
    int cnt_a = 0, cnt_e = 0, cnt_i = 0, cnt_o = 0, cnt_u = 0;
    
    cin.getline(c, 80);
    for (int i = 0; i < 80; i++) {
        switch (c[i]) {
            case 'a': cnt_a++; break;
            case 'e': cnt_e++; break;
            case 'i': cnt_i++; break;
            case 'o': cnt_o++; break;
            case 'u': cnt_u++; break;
        }
    }
    cout << cnt_a << ' ' << cnt_e << ' ' << cnt_i << ' ' << cnt_o << ' ' << cnt_u << endl;
    
    return 0;
}