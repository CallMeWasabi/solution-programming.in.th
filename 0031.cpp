#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3], n=0;
    for (int i=0; i<3; i++) {
        cin >> arr[i];
    }
    while (arr[0]!=1 || arr[1]!=1 || arr[2]!=1) {
        sort(arr, arr+3);
        arr[2] = (arr[2]%2==0) ? arr[2]/2: (arr[2]-1)/2;
        n++;
    }
    cout << n;
    return 0;
}