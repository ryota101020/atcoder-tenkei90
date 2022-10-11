#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long
const ll mod = 1000000007;
vector<vector<pair<ll, ll>>> graph(100005);
vector<ll> dists(100005, mod);
vector<ll> diste(100005, mod);

int main() {
  ll n, m;
  cin >> n >> m;
  rep(i, m) {
    ll a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    graph[a].push_back(make_pair(b, c));
    graph[b].push_back(make_pair(a, c));
  }
  queue<ll> que;
  que.push(0);
  dists[0] = 0;
  while (!que.empty()) {
    ll node = que.front();
    que.pop();
    rep(i, graph[node].size()) {
      ll next = graph[node][i].first;
      ll d = graph[node][i].second;
      if (dists[next] < dists[node] + d) continue;
      dists[next] = dists[node] + d;
      que.push(next);
    }
  }
  que.push(n - 1);
  diste[n - 1] = 0;
  while (!que.empty()) {
    ll node = que.front();
    que.pop();
    rep(i, graph[node].size()) {
      ll next = graph[node][i].first;
      ll d = graph[node][i].second;
      if (diste[next] < diste[node] + d) continue;
      diste[next] = diste[node] + d;
      que.push(next);
    }
  }
  rep(i, n) cout << dists[i] + diste[i] << endl;
  return 0;
}
