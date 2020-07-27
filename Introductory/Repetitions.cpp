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
    string s;
    ll ans=0;
    cin >> s;
    ll cur=1;
    REP(i,1,(s.length()-1)){
        if(s[i]==s[i-1]) cur++;
        else{
            ans=max(ans,cur);
            cur=1;
        }
    }
    ans=max(cur,ans);
    cout << ans << endl;
    return 0;
}
