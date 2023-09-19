#include <bits/stdc++.h>
using namespace std;

int main() {
    int memo[10];
    int n, r, f_index=10;
    memset(memo, 0, sizeof(memo));
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> r;
        memo[r]++;
        f_index = (r<f_index&&r!=0) ? r: f_index;
    }
    cout << f_index;
    memo[f_index]--;
    for (int i=0; i<10; i++) {
        for (int j=0; j<memo[i]; j++) {
            cout << i;
        }
    }
    return 0;
}