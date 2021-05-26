#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#ifndef ONLINE_JUDGE
#define deb(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define deb(...)
#endif
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define forEach(arr) for (auto &x : arr)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
template <typename A>
ostream &operator<<(ostream &cout, vector<A> const &v);
template <typename A, typename B>
ostream &operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.F << ", " << p.S << ")"; }
template <typename A>
ostream &operator<<(ostream &cout, vector<A> const &v) {
  cout << "[ ";
  for (int i = 0; i < v.size(); i++) {
    if (i) cout << ", ";
    cout << v[i];
  }
  return cout << "]";
}
template <typename A>
istream &operator>>(istream &cin, vector<A> &v) {
  for (auto &i : v) cin >> i;
  return cin;
}
// #define cerr if(false)cerr

const int mod = 1'000'000'007;
//=======================

vi arr, temp;
int n, ans = 1;
void subs(int curr) {
  if (curr == n and temp.size() > 1) {
    int i, min_diff = abs(arr[0] - arr[1]);
    Fo(i, 2, temp.size()) {
      min_diff = min(min_diff, abs(arr[i] - arr[i - 1]));
    }
    if (min_diff >= temp.back()) ans = max(ans, (int)temp.size());
  }
  if (curr == n) return;
  temp.push_back(arr[curr]);
  subs(curr + 1);
  temp.pop_back();
  subs(curr + 1);
}
void solve() {
  cin >> n;
  arr.resize(n);
  cin >> arr;
  ans = 1;
  sortall(arr);
  subs(0);
  cout << ans;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("error.txt", "w", stderr);
#endif
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
    cout << "\n";
  }
  return 0;
}

//g++ -std=c++14