#include <iostream>
#include <set>
#include <vector>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int ans = 1;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int i = 0, j = 0;
  set<int> s;
  while (i < n and j < n) {
    while (j < n && s.find(a[j]) == s.end()) {
      s.insert(a[j]);
      ans = max(ans, (int)s.size());
      j++;
    };
	while(j<n and s.find(a[j])!=s.end()){
		s.erase(a[i]);
		i++;
	}
  }
  cout << ans << '\n';
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
