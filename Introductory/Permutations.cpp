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
    ll n;
    cin >> n;
    if(n==1) cout << "1";
    else if(n<=3) cout << "NO SOLUTION";
    else{
        REP(i,2,n){
            cout << i << " ";
            i++;
        }
        REP(i,1,n){
            cout << i << " ";
            i++;
        }
    }
    return 0;
}
