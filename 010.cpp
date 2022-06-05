#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  int n, q;
  cin >> n;
  vector<int> c(n), p(n), sum_1(n + 1, 0), sum_2(n + 1, 0);
  rep(i, n) cin >> c[i] >> p[i];
  rep(i, n) {
    if (c[i] == 1) {
      sum_1[i + 1] = sum_1[i] + p[i];
      sum_2[i + 1] = sum_2[i];
    } else {
      sum_2[i + 1] = sum_2[i] + p[i];
      sum_1[i + 1] = sum_1[i];
    }
  }
  cin >> q;
  int x, y;
  rep(i, q) {
    cin >> x >> y;
    cout << sum_1[y] - sum_1[x - 1] << " " << sum_2[y] - sum_2[x - 1] << endl;
  }
  return 0;
}
