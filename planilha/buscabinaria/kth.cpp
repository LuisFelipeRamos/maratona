// pescoço pra baixo é canela

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int , int> pii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int c = 0;
        int ans = 0;
        int aux = k/(n-1) + (k%(n-1)==0 ? 0 : 1);
        c = aux * n;
        ans = c - (aux*(n-1)-k) - 1;
        cout << ans << endl;
    }    
    exit(0);
}
