#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  map<string, int> map;
  rep(i, n) {
    int b = map.size();
    map[s[i]]++;
    int a = map.size();
    if (a != b) cout << i + 1 << endl;
  }
  return 0;
}
