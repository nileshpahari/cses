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
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    //
    // total places - no of attacking places
    // i.e total places - 2*(no of #2*3 cells and #3*2 cells)
    // no of #2*3 cells = no of #3*2 cells as they are symmetric (just flip the
    // grid to check).
    //
    int tc = i * i;
    long long t_places = 1LL * tc * (tc - 1) / 2;
    cout << t_places - 2 * 2 * ((i - 1) * (i - 2)) << nl;
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