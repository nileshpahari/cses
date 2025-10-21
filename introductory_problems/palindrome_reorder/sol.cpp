#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);

typedef vector<int> vi;

/*
cleaner/smarter but less efficient 
vector<int> freq(26);
	string s;
	cin >> s;
	int n = s.length();
	for (char c : s) {
		freq[c-'A']++; // we subtract ASCII values
		// so we change char A..Z into value 0..25
	}
	string half;
	char mid = '?';
	for (int c = 0; c < 26; c++) {
		if (freq[c] % 2 == 1) {
			if (n % 2 == 0 || mid != '?') {
				cout << "NO SOLUTION\n";
				return 0;
			}
			else {
				mid = 'A' + c;
			}
			freq[c]--;
		}
		half += string(freq[c] / 2, 'A' + c);
	}
	cout << half;
	if (mid != '?') {
		cout << mid;
	}
	reverse(half.begin(), half.end());
	cout << half << "\n";
*/


void solve() {
  string s;
  cin >> s;
  char oddChar = '?';
  int extra = 0;
  vi freq(26);

  for (char ch : s) {
    freq[ch - 'A']++;
  }
  for (int i = 0; i < 26; ++i) {
    if (freq[i] % 2 != 0) {
      if (s.length() % 2 == 0 || oddChar != '?') {
        cout << "NO SOLUTION";
        return;
      }
      oddChar = i + 'A';
      s[s.length() / 2] = oddChar;
      freq[i]--;
    }
    int half = freq[i] / 2;
    for (int j = 0; j < half; j++) {
      s[j + extra] = s[s.length() - extra - j - 1] = i + 'A';
    }
    extra += half;
  }
  cout << s;
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