#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int H, W;
  cin >> H >> W;
  vector<string> grid(H);
  for (int i = 0; i < H; i++) {
    cin >> grid[i];
  }
  for (int r = 0; r < H; r++) {
    for (int c = 0; c < W; c++) {
      if ((r + c) % 2 == 0) {
        if (grid[r][c] != 'A') {
          cout << 'A';
        } else {
          cout << 'C';
        }
      } else {
        if (grid[r][c] != 'B') {
          cout << 'B';
        } else {
          cout << 'D';
        }
      }
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
