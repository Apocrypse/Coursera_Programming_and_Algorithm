#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double pi = 3.14159;
    int h, r;
    cin >> h >> r;
    
    int w = 20000;
    double v;
    v =  pi * r * r * h;
    
    int result = ceil(w / v);
    cout << result << endl;
    
    return 0;
}