#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a); i<=(b); i++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pi;
 
int color[100001]={0};
int vis[100001]={0};
vector<int> adj[100001];
 
int n,m,a,b;
 
bool bfs(int idx){
    queue<int> q;
    q.push(idx);
    color[idx]=1;
    vis[idx]=1;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto i: adj[cur]){
            if(color[i]==color[cur]) return false;
            if(!vis[i]){
                vis[i]=1;
                color[i]=3-color[cur];
                q.push(i);
            }
        }
    }
    return true;
}
 
bool check(){
    REP(i,0,n-1){
        if(!vis[i] && !bfs(i)) return false;
    }
    return true;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    REP(i,0,m-1){
        cin >> a >> b;
        a--; b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(check()) REP(i,0,n-1) cout << color[i] << " ";
    else cout << "IMPOSSIBLE";
    return 0;
}