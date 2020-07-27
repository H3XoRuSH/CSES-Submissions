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
    ll n,k,a;
    cin >> n >> k;
    vector<ll> same;
    vector<ll> x(n);
    map<ll,ll> y,z;
    REP(i,0,n-1){
        cin >> x[i];
        if(k%2==0 && x[i]==(k/2)){
            same.pb(i+1);
            continue;
        }
        y[x[i]]=i+1;
        z[x[i]]++;
    }
    bool flag=true;
    REP(i,0,n-1){
        if(z[x[i]] && z[k-x[i]]){
            cout << y[x[i]] << " " << y[k-x[i]];
            flag=false;
            break;
        }
    }
    if(same.size()>=2){
        cout << same[0] << " " << same[1];
    }
    else if(flag) cout << "IMPOSSIBLE";
    return 0;
}