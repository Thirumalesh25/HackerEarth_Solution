#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int main() {
    vector<int> v;
    int i=1;
    while(i<=N){
        v.push_back(i);
        i<<=1;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        auto r=upper_bound(v.begin(),v.end(),n);
        cout<<*(--r)<<endl;
    }
}
