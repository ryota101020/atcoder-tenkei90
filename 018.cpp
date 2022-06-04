#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define repr(i, n) for (int i = (int)n - 1; i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define ll long long

int main() {
  double T, L, X, Y;
  int Q;
  cin >> T >> L >> X >> Y >> Q;
  vector<double> E(Q);
  rep(i, Q) cin >> E[i];
  rep(i, Q) {
    double x_1 = X, y_1 = Y, z_1 = 0, x_2 = 0,
           y_2 = -1 * sin(2 * M_PI * E[i] / T) * L / 2,
           z_2 = -1 * cos(2 * M_PI * E[i] / T) * L / 2 + L / 2;
    cout << fixed << setprecision(15)
         << atan(z_2 /
                 sqrt((x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2))) *
                180 / M_PI
         << endl;
  }
  return 0;
}
