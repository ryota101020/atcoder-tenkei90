#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, q, ans = 0;
  cin >> n >> q;
  vector<ll> a(n), diff(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n - 1) {
    diff[i] = a[i + 1] - a[i];
    ans += abs(diff[i]);
  }
  rep(i, q) {
    ll l, r, v;
    cin >> l >> r >> v;
    l--, r--;
    if (l != 0) {
      ans -= abs(diff[l - 1]);
      diff[l - 1] += v;
      ans += abs(diff[l - 1]);
    }
    if (r != n - 1) {
      ans -= abs(diff[r]);
      diff[r] -= v;
      ans += abs(diff[r]);
    }
    cout << ans << endl;
  }
  return 0;
}
