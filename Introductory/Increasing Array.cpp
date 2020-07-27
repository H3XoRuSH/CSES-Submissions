#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define LIM (1<<30)
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector<ll> x(n);
    ll ans=0;
    REP(i,0,n-1){
        cin >> x[i];
        if(i==0) continue;
        ans+=max(0LL,x[i-1]-x[i]);
        if(x[i]<x[i-1]) x[i]=x[i-1];
    }
    cout << ans << endl;
    return 0;
}
