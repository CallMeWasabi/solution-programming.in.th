#include <bits/stdc++.h>
using namespace std;

bool is_vowels(char c) {
    char w[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i=0; i<5; i++) {
        if (c==w[i]) {
            return true;
        }
    }
    return false;
}
    
int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    for (int i=0; i<n; i++) {
        if (is_vowels(str[i])) {
            cout << str[i];
            i += 2;
        } else {
            cout <<str[i];
        }
    }
    return 0;
}