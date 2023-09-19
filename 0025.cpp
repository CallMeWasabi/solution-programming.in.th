#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    char c;
    cin >> a >> c >> b;
    if (c=='*') {
        if (a.length()==1 && b.length()==1) {
            cout << "1";
        } else if (a.length()==1) {
            cout << b;
        } else if (b.length()==1) {
            cout << a;
        } else {
            int z = a.length()-1 + b.length()-1;
            cout << '1';
            for (int i=0; i<z; i++) {
                cout << '0';
            }
        }
    } else {
        int arr[(a.length()>b.length())? a.length(): b.length()];
        memset(arr, 0, sizeof(arr));
        int n = sizeof(arr)/sizeof(int);
        for (int i=a.length()-1, j=n-1; i>=0; i--, j--) {
            arr[j] += (a[i]-'0');
        }
        for (int i=b.length()-1, j=n-1; i>=0; i--, j--) {
            arr[j] += (b[i]-'0');
        }
        for (int i=0; i<n; i++) {
            cout << arr[i];
        }
    }
    return 0;
}