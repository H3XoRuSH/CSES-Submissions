#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define endl "\n"
#define REP(i,a,b) for(int i=a; i<=(b); i++)
#define PER(i,a,b) for(int i=a; i>=(b); i--)
#define LIM (1LL<<56LL)
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> pi;
typedef pair<ll,pi> pii;

void solve(){
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
    int t;
    cin >> t;
    REP(i,1,t){
        cout << "Case #" << i << ": ";
        solve();
    }
    */
    ll n,m,a;
    cin >> n >> m;
    set<ll> x;
    x.insert(0);
    x.insert(n);
    ll ans=0;
    REP(i,0,m-1){
        cin >> a;
        auto it=x.lower_bound(a);
        auto it2=x.upper_bound(a);
        x.insert(a);
        ans=max({ans,abs(*it-a),abs(*it2-a)});
        cout << ans << " ";
    }
    return 0;
}
