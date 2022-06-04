#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  int n, m, ans = 100000000;
  cin >> n;
  vector<vector<int>> a(n);
  rep(i, n) rep(j, n) {
    int tmp;
    cin >> tmp;
    a[i].push_back(tmp);
  }
  cin >> m;
  vector<int> x(2 * m), y(2 * m);
  rep(i, m) {
    cin >> x[i] >> y[i];
    x[i]--, y[i]--;
    x[i + m] = y[i], y[i + m] = x[i];
  }
  vector<int> nums(n);
  rep(i, n) nums[i] = i;
  do {
    bool flag = true, update = true;
    int length = 0;
    length = a[nums[0]][0];
    int before = nums[0];
    repi(i, 1, n) {
      rep(j, 2 * m) {
        if (x[j] == before && y[j] == nums[i]) {
          flag = false;
          break;
        }
      }
      if (!flag) {
        update = false;
        break;
      }
      length += a[nums[i]][i];
      before = nums[i];
    }
    if (update) {
      ans = min(ans, length);
    }
  } while (next_permutation(ALL(nums)));
  if (ans == 100000000)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}
