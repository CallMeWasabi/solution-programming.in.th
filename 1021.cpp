#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    priority_queue<int> q;
    char c;
    cin >> n;
    while (n--) {
        cin >> c;
        if (c=='Q') {
            if (q.empty()) {
                cout << "-1" << endl;
            } else {
                cout << q.top() << endl;
                q.pop();
            }
        } else if (c=='P') {
            cin >> t;
            q.push(t);
        }
    }
    return 0;
}