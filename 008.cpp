#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;
ll dp[8][100001] = {0};
char l[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

int main() {
  ll n;
  string s;
  cin >> n >> s;
  rep(i, s.length() + 1) dp[0][i] = 1;
  rep(i, 7) {
    rep(j, s.length()) {
      if (s[j] == l[i])
        dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j];
      else
        dp[i + 1][j + 1] = dp[i + 1][j];
      dp[i + 1][j + 1] %= mod;
    }
  }
  cout << dp[7][s.length()] << endl;
  return 0;
}
