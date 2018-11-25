#include <iostream>
using namespace std;

int reverse(int i, char s[]) {
    if (s[i] == ' ' || s[i] == '\0') {
        return i;
    }
    else {
        int j = reverse(i + 1, s);
        cout << s[i];
        return j;
    }
}

int main() {
    
    char s[500];
    cin.getline(s, 500);
    
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            cout << ' ';
            i++;
        }
        else {
            i = reverse(i, s);
        }
    }
    cout << endl;
    
    return 0;    
}