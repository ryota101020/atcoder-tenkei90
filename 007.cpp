#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll n, q;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  cin >> q;
  vector<ll> b(q);
  rep(i, q) cin >> b[i];
  sort(ALL(a));
  rep(i, q) {
    auto pos = lower_bound(a.begin(), a.end(), b[i]);
    ll idx = distance(a.begin(), pos);
    if (idx == 0) idx = 1;
    ll ans = min(abs(b[i] - a[idx]), abs(b[i] - a[idx - 1]));
    cout << ans << endl;
  }
  return 0;
}
