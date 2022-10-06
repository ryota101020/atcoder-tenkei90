#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;
ll graph[2005][2005] = {0};

struct UnionFind {
  vector<ll> par;

  UnionFind(int N) : par(N) {
    for (int i = 0; i < N; ++i) par[i] = i;
  }

  ll root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  void unite(ll x, ll y) {
    ll rx = root(x);
    ll ry = root(y);
    if (rx == ry) return;
    par[rx] = ry;
  }

  bool same(ll x, ll y) {
    ll rx = root(x);
    ll ry = root(y);
    return rx == ry;
  }
};

int main() {
  ll h, w, q;
  cin >> h >> w >> q;
  UnionFind tree(h * w);
  int tmp;
  rep(i, q) {
    cin >> tmp;
    if (tmp == 1) {
      ll r, c;
      cin >> r >> c;
      graph[r][c] = 1;
      if (graph[r - 1][c] == 1)
        tree.unite((r - 1) * w + c - 1, (r - 2) * w + c - 1);
      if (graph[r + 1][c] == 1) tree.unite((r - 1) * w + c - 1, r * w + c - 1);
      if (graph[r][c - 1] == 1)
        tree.unite((r - 1) * w + c - 1, (r - 1) * w + c - 2);
      if (graph[r][c + 1] == 1)
        tree.unite((r - 1) * w + c - 1, (r - 1) * w + c);
    } else {
      ll ra, ca, rb, cb;
      cin >> ra >> ca >> rb >> cb;
      if (tree.same((ra - 1) * w + ca - 1, (rb - 1) * w + cb - 1) &&
          graph[ra][ca] == 1 && graph[rb][cb] == 1)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }
  return 0;
}
