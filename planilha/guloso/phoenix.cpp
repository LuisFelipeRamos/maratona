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

int main(){ _
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 0;
        if (n==2){
            cout << 2 << endl;
            continue;
        }
        vector<int> v(n+1, 1);
        for (int i = 1; i <= n; i++) v[i] = 2*v[i-1]; 
        for (int i = 1; i <= n; i++){
            if (i < n/2 || i == n) ans += v[i];
            else ans -= v[i];
        } 
        cout << ans << endl;
    }    
    exit(0);
}
