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

int freq[26];
vector<string> permutations;
string s;
int n;

void solve(string str) {
  if ((int)str.length() == n) {
    permutations.push_back(str);
    return;
  }
  for (int i = 0; i < 26; i++) {
    if (freq[i] != 0) {
      freq[i]--;
      solve(str + char(i + 'a'));
      freq[i]++;
    }
  }
}
int main() {
  fastio();
  cin >> s;
  n = s.length();
  for (char ch : s) {
    freq[ch - 'a']++;
  }
  solve("");
  cout << permutations.size() << nl;
  for (string s : permutations) {
    cout << s << nl;
  }
  return 0;
}