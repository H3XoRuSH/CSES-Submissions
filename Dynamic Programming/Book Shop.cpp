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

const int mod=1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    vector<int> x(n),y(n);
    REP(i,0,n-1) cin >> x[i];
    REP(i,0,n-1) cin >> y[i];
    vector< vector<int> > dp(n+1,vector<int>(k+1,0));
    REP(i,1,n){
        REP(j,0,k){
            dp[i][j]=dp[i-1][j];
            if(j-x[i-1]>=0) dp[i][j]=max(dp[i][j],dp[i-1][j-x[i-1]]+y[i-1]);
        }
    }
    cout << dp[n][k];
    return 0;
}
