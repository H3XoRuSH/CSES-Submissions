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
    /* The solution is greedy but since this is dp practice, will trying dp */
    vector<int> dp(1000011,mod);
    dp[0]=0;
    REP(i,1,1000001){
        int cur=i;
        while(cur>0){
            dp[i]=min(dp[i],dp[i-(cur%10)]+1);
            cur/=10;
        }
    }
    int n;
    cin >> n;
    cout << dp[n];
    return 0;
}
