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

void solve(){
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
    int t;
    cin >> t;
    REP(i,1,t){
        cout << "Case #" << i << ": ";
        solve();
    }
    */
    ll n,a;
    multiset<ll> x;
    cin >> n;
    ll ans=0;
    REP(i,0,n-1){
        cin >> a;
        if(i==0){
            x.insert(a);
            continue;
        }
        auto it=x.upper_bound(a);
        if(it!=x.end() && a<*it) x.erase(it);
        x.insert(a);
        //for(it=x.begin(); it!=x.end(); ++it) cout << *it << " "; cout << endl;
    }
    cout << x.size();
    return 0;
}
