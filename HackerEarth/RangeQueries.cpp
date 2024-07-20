#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main() {
    vector<vector<int>> m(N + 1, vector<int>(32, 0));
    for (int i = 1; i <= N; i++) {
        m[i] = m[i - 1];
        int num = i;
        int k = 0;
        while (num > 0) {
            if (num & 1)
                m[i][k]++;
            num >>= 1;
            k++;
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        int c = m[r][x-1] - m[l - 1][x-1]; 
        cout << c << endl;
    }

    return 0;
}
