#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    string a, b;
    cin >> l >> n;
    cin >> a;
    for (int i=1; i<n; i++) {
        cin >> b;
        int e = 0;
        for (int j=0; j<l; j++) {
            if (a[j]!=b[j]) {
                e++;
                if (e>2) {
                    cout << a;
                    return 0;
                }
            }
        }
        a = b;
    }
    cout << a;
    return 0;
}