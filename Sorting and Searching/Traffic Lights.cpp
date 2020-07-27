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
    ll n,m,a;
    cin >> n >> m;
    set<ll> x;
    x.insert(0);
    x.insert(n);
    multiset<ll> z;
    z.insert(n);
    ll ans=0;
    REP(i,0,m-1){
        cin >> a;
        auto it2=x.lower_bound(a);
        auto it=it2; it--;
        ll len=*it2-*it; //cout << *it << " " << *it2 << endl;
        auto it3=z.find(len);
        z.erase(it3);
        z.insert(abs(*it-a));
        z.insert(abs(*it2-a));
        x.insert(a);
        it3=z.end(); it3--;
        cout << *it3 << " ";
        
    }
    return 0;
}
