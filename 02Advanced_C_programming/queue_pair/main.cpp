#include <iostream>
using namespace std;

char boy;

int girlPair(int i, char s[]) {
    if (s[i] == boy) {
        int j = girlPair(i + 1, s);
        cout << i << ' ' << j << endl;
        return girlPair(j + 1, s);
    }
    else {
        return i;
    }
}

int main() {
    
    char s[100];
    cin.get(s, 100);
    boy = s[0];
    
    girlPair(0, s);
    
    return 0;
}