#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll n, k, ans = 0;
  cin >> n >> k;
  vector<ll> v;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    v.push_back(a - b);
    v.push_back(b);
  }
  sort(ALL(v), greater<ll>());
  rep(i, k) ans += v[i];
  cout << ans << endl;
  return 0;
}
