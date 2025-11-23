#include <bits/stdc++.h>
using namespace std;
 
#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
 
#define nl '\n'
 
void solve() {
  int n, maxi;
  cin >> n >> maxi;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int i = 0, j = n - 1;
  int cnt = 0;
  while (i < j) {
    if (1LL * a[i] + a[j] <= maxi) {
      cnt++;
      i++;
      j--;
    } else {
      j--;
    }
  }
  cout << n-cnt;
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