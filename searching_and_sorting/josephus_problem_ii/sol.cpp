#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
                         __gnu_pbds::rb_tree_tag,
                         __gnu_pbds::tree_order_statistics_node_update>
    ordered_set;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, k;
  cin >> n;
  cin >> k;
  ordered_set s;
  for (int i = 1; i <= n; ++i) {
    s.insert(i);
  }
  int idx = 0;
  while (!s.empty()) {
    idx = (idx + k) % s.size();
    auto it = s.find_by_order(idx);
    cout << *it << " ";
    s.erase(it);
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
