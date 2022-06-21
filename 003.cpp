#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;

void dfs(ll start, vector<ll> &depth, vector<vector<ll>> &g,
         vector<ll> &visit) {
  rep(i, g[start].size()) {
    if (visit[g[start][i]] == 0) {
      visit[g[start][i]] = 1;
      depth[g[start][i]] = depth[start] + 1;
      dfs(g[start][i], depth, g, visit);
    }
  }
}

void bfs(ll start, vector<ll> &depth, vector<vector<ll>> &g) {
  queue<ll> q;
  q.push(start);
  depth[start] = 0;
  while (!q.empty()) {
    ll pos = q.front();
    q.pop();
    rep(i, g[pos].size()) {
      if (depth[g[pos][i]] == -1) {
        q.push(g[pos][i]);
        depth[g[pos][i]] = depth[pos] + 1;
      }
    }
  }
}

int main() {
  ll n;
  cin >> n;
  vector<vector<ll>> g(n);
  rep(i, n - 1) {
    ll a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  ll ans = 0;
  vector<ll> visit(n, 0), d(n, -1);
  bfs(0, d, g);
  ll res = -1, pos = -1;
  rep(i, n) {
    if (res < d[i]) {
      res = max(res, d[i]);
      pos = i;
    }
  }
  rep(i, n) visit[i] = 0, d[i] = -1;
  bfs(pos, d, g);
  res = -1;
  rep(i, n) res = max(res, d[i]);
  cout << res + 1 << endl;
  return 0;
}
