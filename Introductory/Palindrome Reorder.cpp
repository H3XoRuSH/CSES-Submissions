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
    string s,ans="";
    ll dic[26]={0};
    cin >> s;
    REP(i,0,(int)(s.length()-1)){
        ll cur=s[i]-'A';
        if(dic[cur]&1){
            dic[cur]=0;
            ans+=(char)(cur+'A');
        }
        else{
            dic[cur]=1;
        }
    }
    ll odd=0;
    REP(i,0,25) odd+=(dic[i]&1);
    if(odd>1) cout << "NO SOLUTION";
    else{
        cout << ans;
        REP(i,0,25) if(dic[i]) cout << (char)(i+'A');
        reverse(ans.begin(),ans.end());
        cout << ans;
    }
    return 0;
}
