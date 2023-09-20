#include <bits/stdc++.h>
using namespace std;

int m, n, x, y;

bool find_str(string b[], string word_target, int i, int j) {
    string temp = "";
    for (int k=0, u=i; k<word_target.length() && u>=0; k++, u--) {
        temp += b[u][j];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=i; k<word_target.length() && u<m; k++, u++) {
        temp += b[u][j];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=j; k<word_target.length() && u>=0; k++, u--) {
        temp += b[i][u];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=j; k<word_target.length() && u<n; k++, u++) {
        temp += b[i][u];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=i, z=j; k<word_target.length() && u>=0 && z>=0; k++, u--, z--) {
        temp += b[u][z];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=i, z=j; k<word_target.length() && u>=0 && z<n; k++, u--, z++) {
        temp += b[u][z];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=i, z=j; k<word_target.length() && u<m && z>=0; k++, u++, z--) {
        temp += b[u][z];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }
    temp = "";
    for (int k=0, u=i, z=j; k<word_target.length() && u<m && z<n; k++, u++, z++) {
        temp += b[u][z];
    }
    if (temp==word_target) {
        y = i, x = j;
        return true;
    }

    return false;
}

int main() {
    int q;
    cin >> m >> n;
    string b[m], str;
    for (int i=0; i<m; i++) {
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        b[i] = str;
    }
    cin >> q;
    while (q--) {
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        vector<pair<int, int>> pos;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (find_str(b, str, i, j)) {
                    pos.push_back(pair<int, int>(i, j));
                }
            }
        }
        if (pos.size() > 1) {
            int ind = 0;
            for (int i=1; i<pos.size(); i++) {
                if (pos[i].first<pos[ind].first && pos[i].second<pos[ind].second) {
                    ind = i;
                }
            }
            cout << pos[ind].first << ' ' << pos[ind].second << endl;
        } else {
            cout << pos[0].first << ' ' << pos[0].second << endl;
        }
    }
    return 0;
}