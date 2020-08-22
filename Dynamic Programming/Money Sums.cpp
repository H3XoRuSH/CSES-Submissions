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
    vector<int> x(n);
    set<int> y;
    ll sum=0;
    REP(i,0,n-1){
        cin >> x[i];
        y.insert(x[i]);
        sum+=x[i];
    }
    vector< vector<ll> > dp(n+1,vector<ll>(sum+1,0));
    dp[0][0]=1;
    REP(i,1,n){
        REP(j,0,sum){
            dp[i][j]=dp[i-1][j];
            if(j-x[i-1]>=0) dp[i][j]+=dp[i-1][j-x[i-1]];
            if(dp[i][j] && j) y.insert(j);
        }
    }
    /*
    REP(i,0,n){
        REP(j,0,sum) cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    cout << y.size() << endl;
    for(auto i: y) cout << i << " ";
    return 0;
}