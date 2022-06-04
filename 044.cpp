#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ro = 0;
  rep(i, q) {
    ll t, x, y;
    cin >> t >> x >> y;
    x--, y--;
    if (t == 2)
      ro += n - 1;
    else if (t == 1)
      swap(a[(x + ro) % n], a[(y + ro) % n]);
    else
      cout << a[(x + ro) % n] << endl;
  }
  return 0;
}
