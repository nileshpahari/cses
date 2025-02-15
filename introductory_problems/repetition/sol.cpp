#include <bits/stdc++.h>
using namespace std;

int main() {
  string seq;
  cin >> seq;
  int count = 1;
  int maxCount = 1;
  int l = seq.length() - 1;
  for (int i = 0; i < l; i++) {
    if (seq[i] == seq[i + 1]) {
      count++;
    } else {
      maxCount = max(maxCount, count);
      count = 1;
    }
  }
  maxCount = max(maxCount, count);
  cout << maxCount;
  return 0;
}
