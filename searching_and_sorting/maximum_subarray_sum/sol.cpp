#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  long long prefix = 0, maxi = LONG_LONG_MIN;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (prefix < 0) {
      prefix = 0;
    }
    prefix += a[i];
    maxi = max(maxi, prefix);
  }
  cout << maxi;
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
