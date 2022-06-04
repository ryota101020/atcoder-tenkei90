#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll a, b, c, n, ans = 10000000000000;
  cin >> n >> a >> b >> c;
  for (ll i = 0; i < 10000; ++i) {
    for (ll j = 0; j < 10000 - i; j++) {
      if (a * i + b * j > n) continue;
      if ((n - (a * i + b * j)) % c == 0 &&
          i + j + (n - (a * i + b * j)) / c < 10000)
        ans = min(ans, i + j + (n - (a * i + b * j)) / c);
    }
  }
  cout << ans << endl;
  return 0;
}
