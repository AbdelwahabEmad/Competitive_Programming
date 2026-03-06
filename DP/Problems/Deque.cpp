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
const int N = 3001;
int n, v[N]; vector<vector<vector<ll>>>dp;
ll go(int l, int r, int flag) {
    if (l > r)return 0;
    ll &ret = dp[l][r][flag];
    if (~ret)return ret;
    ll op1 = 0, op2 = 0;
    op1 = go(l + 1, r, 1 - flag) + v[l];
    op2 = go(l, r - 1, 1 - flag) + v[r];
    if (flag == 1)return ret = max(op1, op2);
    else {
        op1 -= v[l];
        op2 -= v[r];
        return ret = min(op1, op2);
    }
}
void solve() {
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i], sum += v[i];
    }
    dp.resize(n, vector<vector<ll>>(n, vector<ll>(2, -1)));
    ll x = go(0, n - 1, 1);
    ll y = sum - x;
    cout << x - y;
}
signed main() {
    Code_By_Abdelwabab
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}