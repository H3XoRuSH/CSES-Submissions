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
    ll n,a,ans=1;
    map<ll,ll> z;
    cin >> n;
    vector<ll> x(n+1);
    ll end=1;
    REP(i,1,n) cin >> x[i];
    REP(i,1,n){
        if(z[x[i]]!=0) end=max(end,z[x[i]]+1);
        z[x[i]]=i;
        //cout << (i-end+1) << " ";
        ans=max(ans,(i-end+1));
    } cout << endl;
    cout << ans;
    return 0;
}