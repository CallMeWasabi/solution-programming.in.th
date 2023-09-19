#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> temp;
    int n;
    for (int i=0; i<10; i++) {
        cin >> n;
        temp.insert(n%42);
    }
    cout << temp.size();
    return 0;
}