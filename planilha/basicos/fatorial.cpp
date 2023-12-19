// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int , int> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e6;

int main(){ _
    ll n;
    ll ans = 1;
    int c = 1;
    vector<ll> v(MAX+1);
    v[1] = 1;
    for (int i = 2; i <= MAX; i++) {
        ll aux = v[i-1] * i;
        while (aux % 10 == 0){
            aux/=10;
        }
        v[i] = aux % 10;
    }
    while (cin >> n){
        cout << "Instancia " << c << endl;
        ans = v[n];
        cout << ans << endl;
        c++;
    }
    exit(0);
}
