#include <iostream>
using namespace std;

int main() {
    
    int a[100];
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a[i] = num;
    }
    
    int l = 0, r = n - 1;
    int i = l, j = r;
    while (true) {
        int p = a[(l + r) / 2];
        while (a[j] < p && i < j) j--;
        while (a[i] > p && i < j) i++;
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
            i++;
        }
        else {
            if (i + 1 == k) {
                cout << p << endl;
                break;
            }
            else if (i + 1 > k) r = i - 1;
            else l = i + 1;
        }
        i = l;
        j = r;
    }
    
    return 0;
}
