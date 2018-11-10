#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int sumn = 0, sumd = 1;
    
    while (n--) {
        int num, deno;
        char slash;
        cin >> num >> slash >> deno;
        int a = sumd, b = deno, c;
        while (a != 0) {
            c = a;
            a = b % a;
            b = c;
        }
        int gcd = b;
        sumn = deno / gcd * sumn + sumd / gcd * num;
        sumd = sumd / gcd * deno;
    }
    
    int a = sumd, b = sumn, c;
    while (a != 0) {
        c = a;
        a = b % a;
        b = c;
    }
    int gcd = b;
    sumd /= gcd;
    sumn /= gcd;
    
    if (sumd > 1) cout << sumn << '/' << sumd << endl;
    else cout << sumn << endl;
    
    return 0;
}