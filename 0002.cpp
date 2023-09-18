#include <iostream>
using namespace std;

int main() {
    int n, q, min=2e9, max=-2e9;
    cin >> q;
    while (q--) {
        cin >> n;
        if (n < min) {
            min = n;
        } 
        if (n > max) {
            max = n;
        }
    }
    cout << min << endl << max;
}