#include <iostream>
#include <string.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    char word[41];
    cin >> word;
    cout << word;
    int width = strlen(word);
    
    for (int i = 1; i < n; i++) {
        cin >> word;
        if (width + 1 + strlen(word) <= 80) {
            cout << ' ' << word;
            width += 1 + strlen(word);
        }
        else {
            cout << endl;
            cout << word;
            width = strlen(word);
        }
    }
    cout << endl;
    
    return 0;
}