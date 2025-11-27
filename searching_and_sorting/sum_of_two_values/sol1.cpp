#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, target;
  cin >> n >> target;
  map<int, int> hash;
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    if (hash[target - temp]) {
      cout << hash[target - temp] << " " << i;
      return;
    }
    hash[temp] = i;
  }
  cout << "IMPOSSIBLE";
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
