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

void solve(int n, int from, int to) {
  if (n == 0)
    return;
  int other = 1 + 2 + 3 - from - to;
  solve(n - 1, from, other);
  cout << from << " " << to << nl;
  solve(n - 1, other, to);
}

int main() {
  fastio();
  int n;
  cin >> n;
  cout << (1 << n) - 1 << nl;
  solve(n, 1, 3);
  return 0;
}