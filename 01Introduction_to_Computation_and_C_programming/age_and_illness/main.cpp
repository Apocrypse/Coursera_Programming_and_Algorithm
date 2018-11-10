#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    double cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    
    for (int i = 0; i < n; i ++) {
        int age;
        cin >> age;
        if (age < 19) cnt0++;
        else if (age < 36) cnt1++;
        else if (age < 61) cnt2++;
        else cnt3 ++;
    }
    
    cout << "1-18: " << fixed << setprecision(2) << cnt0 / n * 100 << '%' << endl;
    cout << "19-35: " << cnt1 / n * 100 << '%' << endl;
    cout << "36-60: " << cnt2 / n * 100 << '%' << endl;
    cout << "60-: " << cnt3 / n * 100 << '%' << endl;
    
    return 0;
}
