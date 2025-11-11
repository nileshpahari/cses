#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      set<int> s;
      for (int i = 0; i < r; i++) {
        s.insert(arr[i][c]);
      }
      for (int j = 0; j < c; j++) {
        s.insert(arr[r][j]);
      }
      int ans = 0;
      while (s.count(ans)) {
        ans++;
      }
      arr[r][c] = ans;
      cout << nl;
    }
  }
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      cout << arr[r][c] << " ";
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