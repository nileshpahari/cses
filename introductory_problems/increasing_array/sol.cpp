#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  long long  minMoves = 0;
  int prevElement;
  cin >> prevElement;
  n--;
  while (n--) {
    int element;
    cin >> element;
    if (element < prevElement) {
      minMoves += (prevElement - element);
    } else {
      prevElement = element;
    }
  }
  cout << minMoves;
  return 0;
}
