#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    m[x]++;
  }
  long long ans = 0;
  long long mod = 1e9 + 7;
  for (auto i = m.begin(); i != m.end(); ++i) {
    ans += (i->second + ans * i->second);
    ans %= mod;
  }
  cout << ans << nl;
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