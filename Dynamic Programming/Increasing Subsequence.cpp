#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a); i<=(b); i++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> pi;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a;
    cin >> n;
    vector<int> x;
    REP(i,0,n-1){
        cin >> a;
        auto it=lower_bound(x.begin(),x.end(),a);
        if(it==x.end()) x.pb(a);
        else *it=a;
    }
    cout << x.size();
    //for(int i: x) cout << i << " ";
    /*
    ll mx=0,mn=0;
    REP(i,0,(1<<n)-1){
        cin >> x[i];
        if(i&1){
            mx+=max(x[i],x[i-1]);
            mn+=min(x[i],x[i-1]);
        }
    }
    for(int i=0; i<(1<<n); i+=2){
        ll curmin=mn-min(x[i],x[i+1]);
        ll curmax=mx-max(x[i],x[i+1]);
        cout << max(0LL,(curmax+x[i+1])-(curmin+x[i])+1LL) << " ";
        cout << max(0LL,(curmax+x[i])-(curmin+x[i+1])+1LL) << " ";
    }
    */
    return 0;
}