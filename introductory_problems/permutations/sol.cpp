#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n > 1 && n < 4) {
    cout << "NO SOLUTION";
    return 0;
  }
  for (int j = 2; j <= n; j += 2) {
    cout << j << " ";
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << " ";
  }
  return 0;
}
