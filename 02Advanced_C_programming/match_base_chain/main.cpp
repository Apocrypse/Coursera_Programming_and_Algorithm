#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    cin.get();
    
    for (int i = 0; i < n; i++) {
        char chain[256];
        cin.getline(chain, 256);
        char pairs[256];
        for (int j = 0; j < 256; j++) {
            if (chain[j] == '\0') {
                pairs[j] = '\0';
                break;
            }
            switch (chain[j]) {
                case 'A': pairs[j] = 'T'; break;
                case 'T': pairs[j] = 'A'; break;
                case 'C': pairs[j] = 'G'; break;
                case 'G': pairs[j] = 'C'; break;
                default: break;
            }
        }
        cout << pairs << endl;
    }
    
    return 0;
}