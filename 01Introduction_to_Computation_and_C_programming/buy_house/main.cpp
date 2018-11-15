#include <iostream>
using namespace std;

int main() {
    
    int N, K;
    while (cin >> N >> K) {
        double price = 200;
        double rate = (double)K / 100;
        int saving = N, year = 1;
        bool buy = false;
        
        while (year <= 20) {
            if (saving >= price) {
                buy = true;
                cout << year << endl;
                break;
            }
            //cout << year << ' ' << saving << ' ' << price << endl;
            year += 1;
            saving += N;
            price *= (1 + rate);
        }
        if (buy == false) cout << "Impossible" << endl;
    }
    
    return 0;
}