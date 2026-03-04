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
const int N = 3000;
double dp[N][N];
bool vis[N][N] = {};
int n;double v[N];
double go(int idx,int rem) {
    if (rem < 0)return 0.0;
    if (idx == n)return 1.0;
    double &ret = dp[idx][rem];
    if (vis[idx][rem] == 1)return ret;
    vis[idx][rem] = 1;
    ret += go(idx + 1, rem - 1) * (1.0 - v[idx]);
    ret += go(idx + 1, rem) * v[idx];
    return ret;
}
void solve() {
    cout << fixed << setprecision(10);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << go(0, n / 2);
}
signed main() {
    Code_By_Abdelwabab
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}