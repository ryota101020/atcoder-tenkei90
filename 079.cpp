#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll h, w, ans = 0;
  cin >> h >> w;
  ll a[h][w] = {};
  ll b[h][w] = {};
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];
  rep(i, h - 1) {
    rep(j, w - 1) {
      ll diff = b[i][j] - a[i][j];
      a[i][j] += diff;
      a[i][j + 1] += diff;
      a[i + 1][j] += diff;
      a[i + 1][j + 1] += diff;
      ans += abs(diff);
    }
  }
  rep(i, h) rep(j, w) if (a[i][j] != b[i][j]) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}
