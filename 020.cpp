#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  if (a < powl(c, b))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
