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
    ll n,a;
    cin >> n;
    ll ans=(n*(n+1)/2);
    REP(i,1,n-1){
        cin >> a;
        ans-=a;
    }
    cout << ans;
    return 0;
}
