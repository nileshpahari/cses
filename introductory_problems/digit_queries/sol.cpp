#include <bits/stdc++.h>
#include <string>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

#define nl '\n'

void solve() {
  long long k;
  cin >> k;
  long long n = 9;
  long long skipped = 0;
  int len = 1;
  while (true) {
    if (k > n * len) {
      k -= n * len;
      skipped += n;
    } else {
      long long n_skip = (k - 1) / len; // numbers to be skipped of this length
      skipped += n_skip;
      k -= n_skip * len;
      cout << to_string(skipped + 1)[k - 1] << nl;
      return;
    }
    len++;
    n*=10;
  }
}

int main() {
  fastio();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}