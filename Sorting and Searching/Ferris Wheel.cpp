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
    ll n,k;
    cin >> n >> k;
    vector<ll> x(n);
    REP(i,0,n-1) cin >> x[i];
    sort(x.begin(),x.end());
    ll a=0,b=n-1;
    ll ans=0;
    while(a<=b){
        ll c1=x[a]+x[b];
        if(a==b){
            ans++;
            break;
        }
        if(c1<=k) a++;
        ans++;
        b--;
    }
    cout << ans;
    return 0;
}
