#include <bits/stdc++.h>
using namespace std;

string div(string str, int m) {
    string temp = "";
    if ((str[0]-'0')%m>0) {
        temp += str[0];
    }
    for (int i=1; i<str.length(); i++) {
        temp += str[i];
        int r = stoi(temp)%m;
        if (r==0) {
            temp = "";
        } else {
            temp = to_string(r);
        }
    }
    return (temp.length()!=0)? temp: "0";
}

int main() {
    string str;
    cin >> str;
    cout << div(str, 3) << " " << div(str, 11);
    return 0;
}