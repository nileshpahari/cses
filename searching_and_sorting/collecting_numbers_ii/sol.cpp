#include <iostream>
#include <vector>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> pos(n + 1);
  vector<int> arr(n);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i - 1];
    pos[arr[i - 1]] = i;
  }
  long long cnt = 1;
  for (int i = 1; i < n; i++) {
    if (pos[i + 1] < pos[i]) {
      cnt++;
    }
  }
  while (m--) {
    int i, j;
    cin >> i >> j;
    if (i > j)
      swap(i, j);
    int x = arr[i - 1];
    int y = arr[j - 1];

    if (x + 1 == y) {
      cnt++;
    } else if (y + 1 == x) {
      cnt--;
    }
    if (x != 1 && i < pos[x - 1] && pos[x - 1] < j)
      cnt--;
    if (x != n && i < pos[x + 1] && pos[x + 1] < j)
      cnt++;
    if (y != 1 && i < pos[y - 1] && pos[y - 1] < j)
      cnt++;
    if (y != n && i < pos[y + 1] && pos[y + 1] < j)
      cnt--;
    swap(pos[x], pos[y]);
    swap(arr[i - 1], arr[j - 1]);
    cout << cnt << nl;
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