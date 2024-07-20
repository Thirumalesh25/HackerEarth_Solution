#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool func(int a, int b) {
    if ((__builtin_popcount(a) & 1) && !(__builtin_popcount(b) & 1)) {
        return false;
    } else if ((__builtin_popcount(b) & 1) && !(__builtin_popcount(a) & 1)) {
        return true;
    } else {
        return a < b;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), func);
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";  
        }
        cout << endl; 
    }
}