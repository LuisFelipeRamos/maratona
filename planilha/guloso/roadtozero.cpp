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
        ll x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        ll ans = 0;
        if (2*a < b){
            ans = (x+y)*a; 
        }else{
            ans = min(x,y)*b + (max(x,y)-min(x,y))*a;
        }
        cout << ans << endl;
    }    
    exit(0);
}
