#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int r = a+b+c;
    if (r<=100&&r>=80) {
        cout << "A";
    } else if (r<=79&&r>=75) {
        cout << "B+";
    } else if (r<=74&&r>=70) {
        cout << "B";
    } else if (r<=69&&r>=65) {
        cout << "C+";
    } else if (r<=64&&r>=60) {
        cout << "C";
    } else if (r<=59&&r>=55) {
        cout << "D+";
    } else if (r<=54&&r>=50) {
        cout << "D";
    } else if (r<=49&&r>=0) {
        cout << "F";
    }
    return 0;
}