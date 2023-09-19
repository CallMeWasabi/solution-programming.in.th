#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int ,int> memo;
    vector<int> p;
    int n, max = 0, t;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> t;
        memo[t]++;
        if (memo[t]>max) {
            max = memo[t];
            p = {t};
        } else if (memo[t]==max) {
            p.push_back(t);
        }
    }
    sort(p.begin(), p.end());
    for (int v: p) {
        cout << v << ' ';
    }
    return 0;
}