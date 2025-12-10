#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int l, n;
  cin >> l >> n;
  set<int> s;
  multiset<int> m;
  s.insert(0);
  s.insert(l);
  m.insert(l);
  while (n--) {
    int x;
    cin >> x;
    s.insert(x);
    auto it = s.find(x);
    auto high = *next(it);
    auto low = *prev(it);
    m.erase(m.find(high-low));
    m.insert(high - x);
    m.insert(x - low);
    cout << *rbegin(m) << " ";
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