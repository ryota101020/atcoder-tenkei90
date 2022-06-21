#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h);
  rep(i, h) rep(j, w) {
    ll tmp;
    cin >> tmp;
    a[i].push_back(tmp);
  }
  vector<ll> tate(h), yoko(w);
  rep(i, h) {
    ll tmp = 0;
    rep(j, w) { tmp += a[i][j]; }
    tate[i] = tmp;
  }
  rep(i, w) {
    ll tmp = 0;
    rep(j, h) { tmp += a[j][i]; }
    yoko[i] = tmp;
  }
  rep(i, h) {
    rep(j, w) { cout << tate[i] + yoko[j] - a[i][j] << " "; }
    cout << endl;
  }
  return 0;
}
