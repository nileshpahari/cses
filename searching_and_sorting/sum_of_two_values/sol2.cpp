#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, target;
  cin >> n >> target;
  vector<pair<int, int>> a;
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    a.emplace_back(temp, i);
  }
  sort(a.begin(), a.end());
  int i = 0, j = n - 1;
  while (i < j) {
    int sum = a[i].first + a[j].first;
    if (sum == target) {
      cout << a[i].second << " " << a[j].second;
      return;
    } else if (sum > target) {
      j--;
    } else {
      i++;
    }
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
