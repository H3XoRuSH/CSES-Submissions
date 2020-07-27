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
    ll n;
    cin >> n;
    vector<ll> x(n);
    REP(i,0,n-1) cin >> x[i];
    sort(x.begin(),x.end());
    ll ans=0;
    REP(i,0,n-1) ans+=abs(x[n/2]-x[i]);
    cout << ans;
    return 0;
}