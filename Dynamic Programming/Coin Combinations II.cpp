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

const ll mod=1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,a;
    cin >> n >> k;
    vector<ll> x(n);
    REP(i,0,n-1) cin >> x[i];
    vector< vector<int> > dp(n+1,vector<int>(k+1,0));
    dp[0][0]=1;
    REP(i,1,n){
        REP(j,0,k){
            dp[i][j]=dp[i-1][j];
            if(j-x[i-1]>=0) dp[i][j]=(dp[i][j]+dp[i][j-x[i-1]])%mod;
        }
    }
    cout << dp[n][k];
    return 0;
}
