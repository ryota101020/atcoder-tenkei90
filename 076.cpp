#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n * 2), ruiseki(n * 2);
  rep(i, n) {
    cin >> a[i];
    a[i + n] = a[i];
  }
  ruiseki[0] = a[0];
  repi(i, 1, 2 * n) ruiseki[i] = ruiseki[i - 1] + a[i];
  if (ruiseki[n - 1] % 10 != 0) {
    cout << "No" << endl;
    return 0;
  }
  ll d = ruiseki[n - 1] / 10;
  rep(i, 2 * n) {
    ll target = ruiseki[i] - d;
    if (target < 0) continue;
    if (binary_search(ruiseki.begin(), ruiseki.begin() + i, target)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
