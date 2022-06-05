#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(46, 0), b(46, 0), c(46, 0);
  rep(i, n) {
    ll tmp;
    cin >> tmp;
    a[tmp % 46]++;
  }
  rep(i, n) {
    ll tmp;
    cin >> tmp;
    b[tmp % 46]++;
  }
  rep(i, n) {
    ll tmp;
    cin >> tmp;
    c[tmp % 46]++;
  }
  rep(i, 46) rep(j, 46) { ans += a[i] * b[j] * c[(46 - (i + j) % 46) % 46]; }
  cout << ans << endl;
  return 0;
}
