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
    ll dp[1000011]={0};
    dp[0]=1;
    REP(i,1,1000010){
        if((i-1)>=0) dp[i]=(dp[i]%mod+dp[i-1]%mod)%mod;
        if((i-2)>=0) dp[i]=(dp[i]%mod+dp[i-2]%mod)%mod;
        if((i-3)>=0) dp[i]=(dp[i]%mod+dp[i-3]%mod)%mod;
        if((i-4)>=0) dp[i]=(dp[i]%mod+dp[i-4]%mod)%mod;
        if((i-5)>=0) dp[i]=(dp[i]%mod+dp[i-5]%mod)%mod;
        if((i-6)>=0) dp[i]=(dp[i]%mod+dp[i-6]%mod)%mod;
    }
    ll n; cin >> n;
    cout << dp[n]%mod;
    return 0;
}
