#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(3);
    string str;
    for (int i=0; i<3; i++) {
        cin >> v[i];
    }
    cin >> str;
    sort(v.begin(), v.end());
    for (char c: str) {
        if (c=='A') {
            cout << v[0] << ' ';
        } else if (c=='B') {
            cout << v[1] << ' ';
        } else {
            cout << v[2] << ' ';
        }
    }
    return 0;
}