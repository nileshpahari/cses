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

vector<string> solve(int n) {
  if (n == 1) {
    return {"0", "1"};
  }
  vector<string> a = solve(n - 1);
  vector<string> b = a;
  reverse(b.begin(), b.end());
  for (string &s : a) {
    s = s + '0';
  }
  for (string &s : b) {
    s = s + '1';
  }
  a.insert(a.end(), b.begin(), b.end());
  return a;
}

int main() {
  fastio();
  int n;
  cin >> n;
  vector<string> gray_code = solve(n);
  for(string s: gray_code){
    cout << s << nl;
  }
  return 0;
}