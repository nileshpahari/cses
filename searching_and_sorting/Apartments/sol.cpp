#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  vector<int> b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0, j = 0, cnt = 0;
  while (i < n && j < m) {
    long long start = b[j] - k;
    long long end = b[j] + k;
    if (a[i] <= end && a[i] >= start) {
      cnt++;
      i++;
      j++;
    } else if (a[i] > end) {
      j++;
    } else {
      i++;
    }
  }
  cout << cnt;
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