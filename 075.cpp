#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, b;
  cin >> n;
  b = n;
  vector<ll> v;
  for (ll i = 2; i <= sqrt(n); ++i) {
    while (b % i == 0) {
      v.push_back(i);
      b /= i;
    }
  }
  if (b > 1 && n != b) v.push_back(b);
  rep(i, 20) if (1 << i >= v.size()) {
    cout << i << endl;
    return 0;
  }
  return 0;
}
