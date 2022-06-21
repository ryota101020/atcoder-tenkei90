#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

int main() {
  ll n, l, k;
  cin >> n >> l >> k;
  vector<ll> a(n + 1), p(n + 1);
  rep(i, n) cin >> a[i];
  a[n] = l, p[0] = a[0];
  repi(i, 1, n + 1) p[i] = a[i] - a[i - 1];
  ll left = -1, right = l + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    // midでk+1分割できるかを調査する
    ll cnt = 0, tmp = 0;
    rep(i, n + 1) {
      tmp += p[i];
      if (mid <= tmp) {
        cnt++;
        tmp = 0;
      }
    }
    if (cnt >= k + 1)
      left = mid;
    else
      right = mid;
  }
  cout << left << endl;
  return 0;
}
