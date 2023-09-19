#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    bool b = false, s = false;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        if (int(str[i])>=65 && int(str[i]<=90)) {
            b = true;
        } else if (int(str[i])>=97 && int(str[i])<=122) {
            s = true;
        }
        if (b&&s) {
            cout << "Mix";
            return 0;
        }
    }
    (b) ? cout << "All Capital Letter": cout << "All Small Letter";
    return 0;
}