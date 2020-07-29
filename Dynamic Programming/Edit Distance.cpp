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
    string a,b;
    cin >> a >> b;
    int n=a.length(),m=b.length();
    int dp[n+1][m+1];
    REP(i,0,n){
        REP(j,0,m){
            if(i==0) dp[i][j]=j;
            else if(j==0) dp[i][j]=i;
            else if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
        }
    }
    cout << dp[n][m];
    return 0;
}
