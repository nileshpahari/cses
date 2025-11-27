#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    mp[a]++;
    mp[b]--;
  }
  int ans = 0, maxi = 0;
  for (auto i : mp) {
    ans += i.second;
    maxi = max(ans, maxi);
  }
  cout << maxi << nl;
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
