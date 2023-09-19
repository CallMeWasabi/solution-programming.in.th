#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n;
    char b[m][n];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> b[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        cin >> k;
        bool h = false;
        for (int j=0; j<m; j++) {
            if (b[j][i]=='O') {
                h = true;
                for (int u=j-1; u>=0 && k>0; u--, k--) {
                    b[u][i] = '#';
                }
                break;
            } else if (!h&&j+1==m) {
                for (int u=j; u>=0 && k>0; u--, k--) {
                    b[u][i] = '#';
                }
            }
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}