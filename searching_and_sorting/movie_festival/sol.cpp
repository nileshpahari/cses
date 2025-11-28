#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> timestamps(n);
  for (int i = 0; i < n; ++i) {
    cin >> timestamps[i].first >> timestamps[i].second;
  }
  sort(timestamps.begin(), timestamps.end());
  int ans = 1, current = timestamps[0].second;
  for (int i = 1; i < n; i++) {
    if (timestamps[i].first >= current) {
      ans++;
      current = timestamps[i].second;
    } else {
      current = min(current, timestamps[i].second);
    }
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
