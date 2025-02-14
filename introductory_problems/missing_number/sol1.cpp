
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  long long sum;
  cin >> n;
 
  sum = 1LL * n * (n + 1) / 2;
 
  for (int i = 1, x; i < n; i++) {
    cin >> x;
    sum -= x;
  }
 
  cout << (sum) << "\n";
  return 0;
}
