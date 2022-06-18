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
  string s;
  cin >> n >> s;
  vector<ll> cnt;
  char c = s[0];
  ll m = 1;
  repi(i, 1, n) {
    if (c != s[i]) {
      cnt.push_back(m);
      m = 1;
      c = s[i];
    } else {
      m++;
    }
  }
  cnt.push_back(m);
  ll diff = 0;
  rep(i, cnt.size()) diff += cnt[i] * (cnt[i] + 1) / 2;
  cout << n * (n + 1) / 2 - diff << endl;
  return 0;
}
