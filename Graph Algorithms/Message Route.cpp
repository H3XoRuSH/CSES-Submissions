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
    int n,m,a,b;
    cin >> n >> m;
    vector<int> adj[n];
    REP(i,0,m-1){
        cin >> a >> b;
        a--; b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    queue<int> q;
    q.push(0);
    map<int,int> p;
    REP(i,0,n-1) p[i]=i;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        if(cur==(n-1)){
            vector<int> ans;
            while(cur!=0){
                ans.pb(cur+1);
                cur=p[cur];
            }
            ans.pb(1);
            reverse(ans.begin(),ans.end());
            cout << ans.size() << endl;
            for(auto i: ans) cout << i << " ";
            return 0;
        }
        for(auto i: adj[cur]){
            if(i==p[i]){
                p[i]=cur;
                q.push(i);
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}