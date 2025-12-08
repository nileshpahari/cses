#include <iostream>
#include <set>
#include <vector>
using namespace std;
 
#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);
 
#define nl '\n'
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  multiset<int> s;
  for (int i = 0; i < n; ++i) {
	int x;
	cin >> x;
    auto up = s.upper_bound(x);
    if (up != s.end()) {
		// s.erase(up); s.insert(x);
		*up=x;
    } else {
      s.insert(x);
    }
  }
  cout << (int)s.size();
}
 
int main() {
  fastio();
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;
//
// #define fastio()                                                               \
//   ios::sync_with_stdio(false);                                                 \
//   cin.tie(NULL);
//
// #define nl '\n'
//
// void solve() {
//   int n;
//   cin >> n;
//   vector<int> a;
//   for (int i = 0; i < n; ++i) {
//     int x;
//     cin >> x;
//     if (a.empty() or x >= a.back()) {
// 		a.push_back(x);
//     } else {
// 		auto up = upper_bound(a.begin(), a.end(), x);
// 		*up = x;
// 	}
//   }
//   cout << (int)a.size();
// }
//
// int main() {
//   fastio();
//   int t = 1;
//   // cin >> t;
//   while (t--) {
//     solve();
//   }
//   return 0;
// }
