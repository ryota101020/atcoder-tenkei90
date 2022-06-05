#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, ans = 1;
  cin >> n;
  vector<ll> v(n, 0);
  rep(i, n) rep(j, 6) {
    ll tmp;
    cin >> tmp;
    v[i] += tmp;
  }
  rep(i, n) { ans = ans * v[i] % MOD; }
  cout << ans << endl;
  return 0;
}
