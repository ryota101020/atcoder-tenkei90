#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll q;
  cin >> q;
  vector<ll> top, bottom;
  rep(i, q) {
    ll t, x;
    cin >> t >> x;
    if (t == 1) top.push_back(x);
    if (t == 2) bottom.push_back(x);
    if (t == 3) {
      if (top.size() >= x)
        cout << top[top.size() - x] << endl;
      else
        cout << bottom[x - top.size() - 1] << endl;
    }
  }
  return 0;
}
