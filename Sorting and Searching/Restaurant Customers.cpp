#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define endl "\n"
#define REP(i,a,b) for(int i=a; i<=(b); i++)
#define PER(i,a,b) for(int i=a; i>=(b); i--)
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b;
    vector<pi> x;
    cin >> n;
    REP(i,0,n-1){
        cin >> a >> b;
        x.pb({a,1});
        x.pb({b,-1});
    }
    ll ans=0;
    ll cur=0;
    sort(x.begin(),x.end());
    REP(i,0,(2*n)-1){
        cur+=(x[i].s);
        ans=max(ans,cur);
    }
    cout << ans;
    return 0;
}
