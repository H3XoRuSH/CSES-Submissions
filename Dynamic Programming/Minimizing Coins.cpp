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

const ll mod=1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll dp[1000011];
    ll n,m,a;
    cin >> n >> m;
    REP(i,0,m) dp[i]=INT_MAX;
    map<ll,ll> y;
    vector<ll> x;
    REP(i,0,n-1){
        cin >> a;
        if(y[a]==0) x.pb(a);
        y[a]++;
        dp[a]=1;
    }
    REP(i,1,m){
        REP(j,0,x.size()-1){
            if((i-x[j])>0 && dp[i-x[j]]!=-1){
                dp[i]=min(dp[i],dp[i-x[j]]+1);
            }
        }
    }
    //REP(i,1,6) cout << dp[i] << " "; cout << endl;
    if(dp[m]==INT_MAX) cout << "-1";
    else cout << dp[m];
    return 0;
}
