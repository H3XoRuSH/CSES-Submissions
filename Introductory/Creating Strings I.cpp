#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define REP(i,a,b) for(int i=a; i<=int(b); i++)
#define LIM (1<<30)
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pi;

const ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do{
        ans.pb(s);
    } while(next_permutation(s.begin(),s.end()));
    cout << ans.size() << endl;
    for(auto i: ans) cout << i << endl;
    return 0;
}
