#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  string n;
  int k;
  cin >> n >> k;
  while (k > 0) {
    ll tmp = 0;
    rep(i, n.length()) {
      ll x = powl(8, i) * (n[n.length() - i - 1] - 48);
      tmp += x;
    }
    string nine = "";
    while (tmp / 9 > 0) {
      char c = tmp % 9 + 48;
      nine = c + nine;
      tmp /= 9;
    }
    char c = tmp + 48;
    nine = c + nine;
    rep(i, nine.length()) if (nine[i] == '8') nine[i] = '5';
    n = nine;
    k--;
  }
  cout << n << endl;
  return 0;
}
