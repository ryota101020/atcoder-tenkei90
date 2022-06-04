#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ll a, b, ans;
  cin >> a >> b;
  ans = lcm(a, b);
  if (b / gcd(a, b) > 1e18L / a)
    cout << "Large" << endl;
  else
    cout << ans << endl;
  return 0;
}
