#include <iostream>
#include <set>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  multiset<int> s;
  for (int i = 0; i < n; ++i) {
	int x;
	cin >> x;
    auto up = s.upper_bound(x);
    if (up != s.end()) {
		s.erase(up);
		s.insert(x);
    } else {
      s.insert(x);
    }
  }
  cout << (int)s.size();
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
