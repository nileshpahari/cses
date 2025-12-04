#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  long long cur = -1e9, maxi = -1e9;
  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;
    cur = max(a, cur + a);
    maxi = max(maxi, cur);
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
