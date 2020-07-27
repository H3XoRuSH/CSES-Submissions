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

ll process(ll a){
    if(a==1) return 0;
    return (a&1?(3*a+1):a/2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << n << " ";
    while(n!=0){
        n=process(n);
        if(n!=0) cout << n << " ";
    }
    return 0;
}
