#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define LIM (1<<30)
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pi;

const ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,x,y;
    cin >> t;
    while(t--){
        cin >> y >> x;
        ll ans;
        if(y>=x){
            if(y&1) ans=(y-1)*(y-1)+x;
            else ans=y*y-x+1;
        }
        else{
            if(x&1) ans=x*x-y+1;
            else ans=(x-1)*(x-1)+y;
        }
        cout << ans << endl;
    }
    return 0;
}
