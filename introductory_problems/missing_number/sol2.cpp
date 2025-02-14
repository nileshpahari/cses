#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int xor1 = 0, xor2 = 0;
  for (int i = 1; i < n; i++) {
    int no;
    cin >> no;
    xor1 = xor1 ^ i;
    xor2 = xor2 ^ no;
  }
  xor1=xor1^n;
  int XOR=xor1^xor2;
  cout << XOR;
  return 0;
