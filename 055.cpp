#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, p, q, cnt = 0;
  cin >> n >> p >> q;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i] %= p;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        for (int l = k + 1; l < n; ++l) {
          for (int m = l + 1; m < n; ++m) {
            ll tmp;
            tmp = a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p;
            if (tmp == q) cnt++;
          }
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
