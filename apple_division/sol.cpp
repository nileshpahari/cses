#include <bits/stdc++.h>

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

int arr[21];
int n;
long long diff = LONG_LONG_MAX;

void solve(int index, long long A, long long B ) {
    if(index==n){
        diff= min(diff, abs(A-B));
        return;
    }
    solve(index+1, A+arr[index], B);
    solve(index+1, A, B+arr[index]);
}

int main() {
  fastio();
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
  solve(0, 0, 0);
  cout << diff;
  return 0;
}