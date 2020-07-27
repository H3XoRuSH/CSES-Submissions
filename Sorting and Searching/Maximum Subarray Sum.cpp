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
    ll n,a;
    cin >> n;
    ll best=INT_MIN,cur=0;
    while(n--){
        cin >> a;
        cur+=a;
        best=max(best,cur);
        cur=max(0LL,cur);
    }
    cout << best;
    return 0;
}