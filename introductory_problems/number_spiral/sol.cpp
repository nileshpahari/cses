#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vip;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define nl '\n'
#define pb push_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
  int r, c;
  cin >> r >> c;
  int layer = max(r, c);
  //   flipping r and c (could have also used if-else)
  if (layer % 2 != 0) {
    r = r ^ c;
    c = r ^ c;
    r = r ^ c;
  }
  if (r >= c) {
    cout << (long long)layer * layer - (c - 1) << endl;
  } else {
    cout << (long long)(layer - 1) * (layer - 1) + 1 + (r - 1) << endl;
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
