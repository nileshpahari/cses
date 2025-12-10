#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  long long ans = 0;
  int left = 0;
  map<int, int> mp;
  for (long long right = 1; right <= n; ++right) {
    int x;
    cin >> x;
    left = max(left, mp[x]);
    ans += right - left;
    mp[x] = right;
  }
  cout << ans;
}

int main() {
  fastio();
  long long t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
