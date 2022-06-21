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
  for (int bit = 0; bit < (1 << n); bit++) {
    string s = "";
    for (int i = 0; i < n; i++) {
      if ((bit >> i) & 1)
        s = ")" + s;
      else
        s = "(" + s;
    }
    vector<int> v(n + 1, -1);
    v[0] = 0;
    rep(i, n) {
      if (s[i] == '(')
        v[i + 1] = v[i] + 1;
      else
        v[i + 1] = v[i] - 1;
      if (v[i + 1] < 0) break;
    }
    if (v[n] == 0) cout << s << endl;
  }
  return 0;
}
