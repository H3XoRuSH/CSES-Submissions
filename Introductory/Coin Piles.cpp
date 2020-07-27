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

const ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<b){
            a^=b;
            b^=a;
            a^=b;
        }
        a-=(2*(a-b));
        b-=(a-b);
        if(a>=0 && a%3==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
