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
    ll n,m,a;
    cin >> n >> m;
    ll dp[m+1]={0};
    vector<ll> x(n);
    REP(i,0,n-1){
        cin >> x[i];
        if(x[i]<=m) dp[x[i]]=1;
    }
    REP(i,1,m){
        REP(j,0,n-1){
            if((i-x[j])>0){
                dp[i]=(dp[i]+dp[i-x[j]])%mod;
            }
        }
    }
    cout << dp[m]%mod;
    return 0;
}
