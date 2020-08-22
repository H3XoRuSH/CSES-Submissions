#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a); i<=(b); i++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pi;
 
int p[100001];
 
int fs(int a){
    if(p[a]==a) return a;
    return p[a]=fs(p[a]);
}
 
void js(int a, int b){
    a=fs(a);
    b=fs(b);
    p[b]=a;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,r,a,b;
    cin >> n >> r;
    REP(i,1,n) p[i]=i;
    REP(i,0,r-1){
        cin >> a >> b;
        js(a,b);
    }
    vector<int> ans;
    REP(i,1,n){
        if(p[i]==i) ans.pb(i);
    }
    cout << ans.size()-1 << endl;
    REP(i,1,ans.size()-1){
        cout << ans[i-1] << " " << ans[i] << endl;
    }
    return 0;
}