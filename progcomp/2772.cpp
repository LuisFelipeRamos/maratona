// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5 + 10;
ll plantas[MAX];
ll seg[4 * MAX];

ll build(int p, int l, int r) {
  if (l == r) {
    ll aux = 1LL << monters[l];
    return seg[p] = aux;
  }
  int m = (l + r) / 2;
  return seg[p] = build(2 * p, l, m) | build(2 * p + 1, m + 1, r);
}

ll query(int a, int b, int p, int l, int r) {
  if (b < l or r < a)
    return 0;
  if (l >= a and r <= b)
    return seg[p];
  int m = (l + r) / 2;
  return query(a, b, 2 * p, l, m) | query(a, b, 2 * p + 1, m + 1, r);
}

ll update(int i, int x, int p, int l, int r) {
  if (i < l or r < i)
    return seg[p];
  if (l == r) {
    seg[p] = 1LL << x;
    return seg[p];
  }
  int m = (l + r) / 2;
  return seg[p] = update(i, x, 2 * p, l, m) | update(i, x, 2 * p + 1, m + 1, r);
}

int main() {
  _ int N, K, T;
  while (cin >> N >> K >> T) {
    build(1, 1, N);
    while (K--) {
      int l, r;
      cin >> l >> r;
      update(l, r, 1, 1, N);
    }
  }
  exit(0);
}
