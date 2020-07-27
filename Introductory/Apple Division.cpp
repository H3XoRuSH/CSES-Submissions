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
    ll n;
    cin >> n;
    vector<ll> x(n);
    ll tot=0;
    REP(i,0,n-1){
        cin >> x[i];
        tot+=x[i];
    }
    if(n==1){
        cout << x[0];
        return 0;
    }
    ll ans=LIM;
    REP(i,0,(1<<n)-1){
        ll cur=0;
        for(int j=0; (1<<j)<=i; j++){
            if(i&(1<<j)) cur+=x[j];
        }
        ans=min(ans,abs(cur-(tot-cur)));
    }
    cout << ans;
    return 0;
}
