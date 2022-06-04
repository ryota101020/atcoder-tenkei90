#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll n, k, cnt = 0;
  cin >> n >> k;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) {
    ll tmp;
    tmp = abs(a[i] - b[i]);
    cnt += tmp;
  }
  if (cnt > k) {
    cout << "No" << endl;
  } else {
    if ((k - cnt) % 2 == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
