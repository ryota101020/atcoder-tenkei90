#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  double h, w;
  cin >> h >> w;
  if (h == 1 || w == 1)
    cout << h * w << endl;
  else
    cout << ceil(h / 2) * ceil(w / 2) << endl;
  return 0;
}
