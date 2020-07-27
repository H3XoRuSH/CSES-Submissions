#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define REP(i,a,b) for(int i=a; i<=int(b); i++)
#define LIM (1<<30)
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pi;

const ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k,a;
    cin >> n >> m >> k;
    vector<ll> x(n);
    multiset<ll> y;
    REP(i,0,n-1) cin >> x[i];
    REP(i,0,m-1){
        cin >> a;
        y.insert(a);
    }
    sort(x.begin(),x.end());
    ll ans=0;
    REP(i,0,n-1){
        auto it=y.lower_bound(x[i]-k);
        if(it!=y.end() && *it<=(x[i]+k)){
            ans++;
            y.erase(it);
        }
    }
    cout << ans;
    return 0;
}
