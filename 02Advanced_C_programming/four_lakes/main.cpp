#include <iostream>
using namespace std;

int main() {
    
    int p, d, t, h;
    for (p = 1; p <= 4; p++) {
        for (d = 1; d <= 4; d++) {
            if (p == d) continue;
            for (t = 1; t <= 4; t++){
                if (p == t || d == t) continue;
                h = 10 - p - d - t;
                if ((d == 1) + (h == 4) + (p == 3) == 1 &&
                    (h == 1) + (d == 4) + (p == 2) + (t == 3) == 1 &&
                    (h == 4) + (d == 3) == 1 &&
                    (p == 1) + (t == 4) + (h == 2) + (d == 3) == 1) {
                        cout << p << endl << d << endl << t << endl << h << endl;
                        return 0;
                    }
            }
        }
    }
    
}