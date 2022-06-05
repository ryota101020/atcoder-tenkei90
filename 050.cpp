#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll MOD = 1000000007;

int main() {
  ll n, l;
  cin >> n >> l;
  vector<ll> dp(n + 1, 1);
  repi(i, 1, n + 1) {
    if (i - l >= 0)
      dp[i] = dp[i - 1] + dp[i - l];
    else
      dp[i] = dp[i - 1];
    dp[i] %= MOD;
  }
  cout << dp[n] << endl;
  return 0;
}
