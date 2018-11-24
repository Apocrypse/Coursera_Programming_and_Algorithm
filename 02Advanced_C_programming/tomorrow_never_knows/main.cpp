#include <iostream>
#include <iomanip>
using namespace std;

bool leap(int y) {
    if (y % 400 == 0) return true;
    else if (y % 100 == 0) return false;
    else if (y % 4 == 0) return true;
    else return false;
}
 
int main() {
    
    int month_end[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d;
    char slash;
    cin >> y >> slash >> m >> slash >> d;
    
    if (d >= month_end[m - 1]) {
        if (m == 12) {
            y++;
            m = 1;
            d = 1;
        }
        else if (leap(y) && m == 2 && d == 28) {
            d++;
        }
        else {
            m++;
            d = 1;
        }
    }
    else {
        d++;
    }
    
    cout << y << '-';
    cout << setfill('0') << setw(2) << m << '-';
    cout << setfill('0') << setw(2) << d << endl;
    
    return 0;
}
