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
    int n;
    cin >> n;
    char x[n][n];
    REP(i,0,n-1) REP(j,0,n-1) cin >> x[i][j];
    vector< vector<int> > dp(n+1, vector<int>(n+1,0));
    REP(i,1,n){
        REP(j,1,n){
            if(i==1 && j==1 && x[0][0]!='*') dp[i][j]=1;
            else if(x[i-1][j-1]=='*') dp[i][j]=0;
            else dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
        }
    }
    cout << dp[n][n]%mod;
    return 0;
}
