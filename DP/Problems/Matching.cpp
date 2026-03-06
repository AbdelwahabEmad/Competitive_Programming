#include <bits/stdc++.h>
using namespace std;
void file(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
#define Code_By_Abdelwabab ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl "\n"
#define int long long
#define ll long long
#define ld long double
#define sz(s) (int)(s).size()
const ll N = (1ll << 22),mod = 1e9 + 7;
int grid[22][22];
vector<vector<ll>>dp;
int n;
ll add(ll a,ll b){
    return ((a % mod) + (b % mod)) % mod;
}
ll go(int idx,int bitmask) {
    if (idx == n)return 1;
    ll &ret = dp[idx][bitmask];
    if (~ret)return ret;
    ret = 0;
    for (int i = 0; i < n; i++) {
        if (!(bitmask & (1 << i)) and grid[idx][i] == 1) {
            ret = add(ret, go(idx + 1, bitmask | (1 << i)));
        }
    }
    return ret;
}
void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    dp.assign(n, vector<ll>(1 << n, -1));
    cout << go(0, 0);
}
signed main() {
    Code_By_Abdelwabab
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}