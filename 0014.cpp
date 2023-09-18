#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int q = a/b, r = a-(b*q); 
    if (r == 0) {
        return b;
    }
    return gcd(b, r);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd((a>b) ? a: b, (a>b) ? b: a);
    return 0;
}