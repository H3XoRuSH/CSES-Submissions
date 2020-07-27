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
 
bool comp(pi a, pi b){
    return a.s < b.s;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b;
    vector<pi> x;
    cin >> n;
    REP(i,0,n-1){
        cin >> a >> b;
        x.pb({a,b});
    }
    sort(x.begin(),x.end(),comp);
    //REP(i,0,n-1) cout << x[i].f << " " << x[i].s << endl;
    ll end=0,ans=0;
    REP(i,0,n-1){
        if(x[i].f>=end){
            ans++;
            end=x[i].s;
        }
    }
    cout << ans;
    return 0;
}