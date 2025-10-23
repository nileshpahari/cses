#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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
  string str;
  cin >> str;
  sort(str.begin(), str.end());
  vector<string> permutations;
  do {
    permutations.push_back(str);
  } while (next_permutation(str.begin(), str.end()));
  cout << permutations.size() << nl;
  for (string p : permutations) {
    cout << p << nl;
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
