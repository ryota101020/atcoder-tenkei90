#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll n, m, ans = 0;
  cin >> n >> m;
  vector<vector<ll>> g(n);
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  rep(i, n) {
    int cnt = 0;
    rep(j, g[i].size()) {
      if (g[i][j] < i) cnt++;
    }
    if (cnt == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
