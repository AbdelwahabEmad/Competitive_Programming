#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

void solve() {
    int n;cin >> n;vector<int>v(n);
    int x = 2,i = 0;
    while(x <= n){
        v[i] = x;
        x+=2;
        i++;
    }
    x = 1;
    while(x <= n){
        v[i] = x;
        x+=2;
        i++;
    }
    for(i = 0;i < n - 1;i++){
        if(abs(v[i] - v[i  + 1]) == 1){
            cout << "NO SOLUTION";
            return;
        }
    }
    for(i = 0;i < n;i++)cout << v[i] << " ";
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
