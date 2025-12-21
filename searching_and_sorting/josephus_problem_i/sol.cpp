#include <iostream>
#include <list>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n;
  cin >> n;
  list<int> l;

  for (int i = 1; i <= n; i++) {
    l.push_back(i);
  }
  if (n == 1) {
    cout << 1;
    return;
  }
  auto it = l.begin();
  it++;
  while (!l.empty()) {
    cout << *it << " ";
    it = l.erase(it); // safe: returns next

    if (it == l.end())
      it = l.begin();

    if (!l.empty()) {
      ++it; // skip one
      if (it == l.end())
        it = l.begin();
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
