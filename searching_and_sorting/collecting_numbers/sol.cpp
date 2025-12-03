#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> pos(n + 1);
  int ans = 1;
  for (int i = 1; i <= n; ++i) {
    int temp;
    cin >> temp;
    pos[temp] = i;
  }
  for (int x = 1; x < n; ++x) {
    if (pos[x + 1] < pos[x])
      ans++;
  }
  cout << ans;
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