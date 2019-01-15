#include <iostream>
using namespace std;

struct coordinate {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;
    coordinate points[100];
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (points[j + 1].x > points[j].x) {
                coordinate tmp = points[j];
                points[j] = points[j + 1];
                points[j + 1] = tmp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (points[j + 1].y > points[j].y) {
                coordinate tmp = points[j];
                points[j] = points[j + 1];
                points[j + 1] = tmp;
            }
        }
    }
    
    int cur_x;
    cur_x = points[0].x;
    cout << '(' << points[0].x << ',' << points[0].y << ')';
    for (int i = 1; i < n; i++) {
        if (points[i].x > cur_x) {
            cur_x = points[i].x;
            cout << ',' << '(' << points[i].x << ',' << points[i].y << ')';
        }
    }
    cout << endl;
    
    return 0;
}