#include <iostream>
#include <string>
#include <vector>
using namespace std;

int col_search(vector<string> s, vector<pair<int, int>>& p) {
  int count = 0;
  bool flag = false;
  for (int j = 0; j < s.size(); ++j) {
    for (int i = 0; i < s.size(); ++i) {
      if (s[i][j] == 'x' && !flag) {
        if (j <= 0 || s[i][j - 1] == 'x') {
          continue;
        } else {
          count++;
          flag = true;
          p.push_back(make_pair(i, j - 1));
        }
      } else if (s[i][j] == '.' && flag) {
        count++;
        flag = false;
        p.push_back(make_pair(i, j));
      } else if (s[i][j] == 'x' && flag && j == s.size() - 1) {
        p.pop_back();
        flag = false;
      } else {
        continue;
      }
    }
  }
  return count;
}

int row_search(vector<string> s, vector<pair<int, int>>& p) {
  int count = 0;
  bool flag = false;
  for (int i = 0; i < s.size(); ++i) {
    for (int j = 0; j < s.size(); ++j) {
      if (s[i][j] == 'x' && !flag) {
        if (j <= 0 || s[i][j - 1] == 'x') {
          continue;
        } else {
          count++;
          flag = true;
          p.push_back(make_pair(i, j - 1));
        }
      } else if (s[i][j] == '.' && flag) {
        count++;
        flag = false;
        p.push_back(make_pair(i, j));
      } else if (s[i][j] == 'x' && flag && j == s.size() - 1) {
        p.pop_back();
        flag = false;
      } else {
        continue;
      }
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<pair<int, int>> p_row, p_col;
  for (int i = 0; i < n; ++i) cin >> s[i];
  int count_row = row_search(s, p_row);
  int count_col = col_search(s, p_col);
  if (count_row < count_col) {
    cout << count_row << endl;
    for (int i = 0; i < p.size(); ++i)
      cout << p_row[i].first << " " << p_row[i].second << endl;
  } else {
    cout << count_row << endl;
    for (int i = 0; i < p.size(); ++i)
      cout << p_row[i].first << " " << p_row[i].second << endl;
  }
  return 0;
}
