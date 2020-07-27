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
    ll n,m,a;
    multiset<ll> x;
    cin >> n >> m;
    REP(i,0,n-1){
        cin >> a;
        x.insert(a);
    }
    REP(i,0,m-1){
        cin >> a;
        if(x.empty()){
            cout << "-1\n";
            continue;
        }
        auto it=x.lower_bound(a);
        if(it==x.begin() && *it>a) cout << "-1\n";
        else{
            if(it!=x.begin() && *it!=a) it--;
            cout << *it << endl;
            x.erase(it);
        }
    }
    return 0;
}
