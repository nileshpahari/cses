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
  int n, a, b;
  cin >> n >> a >> b;
  int ties = n - a - b;
  n -= ties;
  if (a + b != n || ties < 0) {
    cout << "NO";
  } else if (n > 0 && (a == n || b == n)) {
    cout << "NO";
  } else {
    cout << "YES" << nl;

    for (int i = 1; i <= n + ties; i++) {
      cout << i << " ";
    }

    cout << nl;

    for (int i = 1; i <= n; i++) {
      int x = i + a;
      if (x > n) {
        x -= n;
      }
      cout << x << " ";
    }
    for (int i = 1; i <= ties; i++) {
      cout << n + i << " ";
    }
  }
  cout << nl;
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