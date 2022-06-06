#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, k, ans;
  cin >> n >> k;
  vector<ll> v(64);
  v[0] = k - 2;
  ans = k * (k - 1) % MOD;
  if (k == 1)
    cout << (n == 1 ? 1 : 0) << endl;
  else if (n == 1)
    cout << k % MOD << endl;
  else if (n == 2)
    cout << k * (k - 1) % MOD << endl;
  else {
    repi(i, 1, 64) v[i] = v[i - 1] * v[i - 1] % MOD;
    rep(i, 64) {
      if (((n - 2) >> i) & 1) ans = ans * v[i] % MOD;
    }
    cout << ans << endl;
  }
  return 0;
}
