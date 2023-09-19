#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, n;
    cin >> q;
    while (q--) {
        cin >> n;
        long double a = n == 0 ? 1: 2;
        if (a != 1) {
            for (int i=0; i<n-1; i++) {
                a *= 2.0;
            }
        }
        cout << setprecision(0) << fixed << a << endl;
    }
}