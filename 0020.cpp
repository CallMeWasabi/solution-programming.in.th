#include <bits/stdc++.h>
using namespace std;

int main() {
    int max=0, index, t; 
    for (int i=0; i<5; i++) {
        int sum = 0;
        for (int j=0; j<4; j++) {
            cin >> t;
            sum += t;
        }
        if (sum>max) {
            max = sum;
            index = i+1;
        }
    }
    cout << index << ' ' << max;
    return 0;
}