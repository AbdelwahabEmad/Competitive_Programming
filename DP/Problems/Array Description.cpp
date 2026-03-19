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
const int mod = 1e9 + 7;
int n, m;
vector<int> v;
vector<vector<int>> dp;
int go(int idx, int prev){
    if(idx == n)return 1;
    int &ret = dp[idx][prev];
    if(~ret)return ret;
    ret = 0;
    if(v[idx] == 0){
        if(idx == 0){
            for(int i = 1;i <= m;i++){
                ret = (ret + go(idx + 1, i)) % mod;
            }
        }else{
            for (int i = max(1LL, prev - 1); i <= min(m, prev + 1); i++) {
                ret = (ret + go(idx + 1, i)) % mod;
            }
        }
    }else {
        if (idx == 0 or abs(v[idx] - prev) <= 1) {
            ret += go(idx + 1, v[idx]);
            ret %= mod;
        }else{
            ret = 0;
        }
    }
    return ret;
}
void solve() {
    cin >> n >> m;
    v.resize(n);
    dp = vector<vector<int>>(n + 1, vector<int>(m + 5, -1));
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    cout << go(0, m + 1);
}
signed main() {
    Code_By_Abdelwabab
    //file();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
