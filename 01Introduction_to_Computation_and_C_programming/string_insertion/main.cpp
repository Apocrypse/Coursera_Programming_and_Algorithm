#include <iostream>
using namespace std;

int main() {
    
    char st[11];
    char subst[4];
    
    while (cin >> st >> subst) {
        int max_ind = 0;
        char max_char = st[0];
        for (int i = 1; i < 10; i++) {
            if (st[i] == '\0') break;
            if (st[i] >  max_char) {
               max_char = st[i];
               max_ind = i;
            }
        }
        
        for (int i = 0; i <= max_ind; i++) cout << st[i];
        cout << subst; 
        for (int i = max_ind + 1; i < 10; i++) {
            if (st[i] == '\0') break;
            cout << st[i];
        }
        cout << endl;
    }
    
    return 0;
}