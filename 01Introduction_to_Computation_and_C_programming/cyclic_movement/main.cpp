#include <iostream>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    m %= n;
    
    int nums[100];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    for (int s = 0, e = n - m - 1; s < e; s++, e--) {
        int temp = nums[s];
        nums[s] = nums[e];
        nums[e] = temp;
    }
    
    for (int s = n - m, e = n - 1; s < e; s++, e--) {
        int temp = nums[s];
        nums[s] = nums[e];
        nums[e] = temp;
    }
    
    for (int s = 0, e = n - 1; s < e; s++, e--) {
        int temp = nums[s];
        nums[s] = nums[e];
        nums[e] = temp;
    }
    
    for (int i = 0; i < n - 1; i++) {
        cout << nums[i] << ' ';
    }
    cout << nums[n - 1] << endl;
    
    return 0;
}