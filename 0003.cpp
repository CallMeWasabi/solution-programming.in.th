#include <bits/stdc++.h>
using namespace std;

void ass(vector<vector<int>>& a, int m, int n) {
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n)), b(m, vector<int>(n));
    ass(a, m, n);
    ass(b, m, n);
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << a[i][j]+b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}