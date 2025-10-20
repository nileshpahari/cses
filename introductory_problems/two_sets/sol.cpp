// other solutions possible (ref: ericto algo yt)
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

void solve() {
  int n;
  cin >> n;
  long long A = 0, B = 0;
  vi a, b;
  long long sum = n * (n + 1) / 2;
  if (sum & 1) {
    cout << "NO";
    return;
  }
  for (int i = n; i >= 1; i--) {
    if (A > B) {
      b.push_back(i);
      B += i;
    } else {
      a.push_back(i);
      A += i;
    }
  }

  cout << "YES" << nl;
  cout << a.size() << nl;
  for (int i : a) {
    cout << i << " ";
  }
  cout << nl << b.size() << nl;
  for (int i : b) {
    cout << i << " ";
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
