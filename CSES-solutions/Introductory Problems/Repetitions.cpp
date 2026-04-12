#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

void solve() {
    string s;cin >> s;
    int cnt = 1;
    int mx = 1;
    for(int i = 0;i < s.size() - 1;i++){
        if(s[i] == s[i + 1]){
            cnt++;
        }
        else{
            mx = max(mx,cnt);
            cnt = 1;
        }
    }
    mx = max(mx,cnt);
    cout << mx;
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
