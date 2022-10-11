#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;
ll fact[100005];
ll factinv[100005];

ll calc(ll a, ll b) {
  ll tmp = 1, ttmp = b;
  for (ll i = 0; i < 31; ++i) {
    if (((mod - 2) & (1 << i)) != 0) {
      tmp *= ttmp;
      tmp %= mod;
    }
    ttmp *= ttmp;
    ttmp %= mod;
  }
  return tmp;
}

int main() {
  ll n;
  cin >> n;
  fact[0] = 1;
  for (ll i = 1; i < 100005; ++i) fact[i] = fact[i - 1] * i % mod;
  for (ll i = 0; i < 100005; ++i) factinv[i] = calc(1, fact[i]);
  for (ll k = 1; k <= n; ++k) {
    ll ans = 0;
    for (ll a = 1;; ++a) {
      if ((n - (k - 1) * (a - 1)) < a) break;
      //   ans += calc(n - (k - 1) * (a - 1), a);
      ans += fact[n - (k - 1) * (a - 1)] * factinv[a] % mod *
             factinv[n - (k - 1) * (a - 1) - a] % mod;
      ans %= mod;
    }
    cout << ans << endl;
  }
  return 0;
}
