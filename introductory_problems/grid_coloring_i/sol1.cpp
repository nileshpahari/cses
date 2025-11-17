#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> grid(h, vector<int>(w));
  vector<vector<int>> ans(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char ch;
      cin >> ch;
      grid[i][j] = ch - 'A';
    }
  }

  for (int r = 0; r < h; r++) {
    for (int c = 0; c < w; c++) {
      int cnt = 0;
      while ((cnt == grid[r][c]) || (c > 0 && ans[r][c - 1] == cnt) ||
             (r > 0 && ans[r - 1][c] == cnt)) {
        cnt++;
      }
      if (cnt > 3) {
        cout << "IMPOSSIBLE" << nl;
        return;
      }
      ans[r][c] = cnt;
    }
  }
  for (vector<int> row : ans) {
    for (int element : row) {
      char a = char(element + 'A');
      cout << a;
    }
    cout << nl;
  }
}

int main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
