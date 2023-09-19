#include <bits/stdc++.h>
using namespace std;

int main() {
    int pos = 0;
    string input;
    cin >> input;
    for (char c: input) {
        if (c=='A') {
            pos = (pos==0) ? 1: (pos==1) ? 0: pos;
        } else if (c=='B') {
            pos = (pos==1) ? 2: (pos==2) ? 1: pos;
        } else if (c=='C') {
            pos = (pos==0) ? 2: (pos==2) ? 0: pos;
        }
    }
    cout << pos+1;
    return 0;
}