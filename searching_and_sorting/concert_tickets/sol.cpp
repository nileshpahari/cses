#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, m;
  cin >> n >> m;
  multiset<int> prices;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    prices.insert(temp);
  }
  for (int i = 0; i < m; i++) {
    int max_price;
    cin >> max_price;
    int last = -1;
    auto it = prices.upper_bound(max_price);
    if (it == prices.begin()) {
      cout << -1 << nl;
    } else {
      it--;
      cout << *it << nl;
      prices.erase(it);
    }
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