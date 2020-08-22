	#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a); i<=(b); i++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pi;
 
int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
char dir[]={'U','L','D','R'};
 
int r,c;
 
char x[1001][1001];
 
bool inside(int a, int b){
    return (a>=0 && b>=0 && a<r && b<c);
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> r >> c;
    int stx,sty;
    REP(i,0,r-1) REP(j,0,c-1){
        cin >> x[i][j];
        if(x[i][j]=='A') { stx=i; sty=j; }
    }
    queue<pi> q;
    q.push({stx,sty});
    vector< vector<bool> > vis(r+1, vector<bool>(c+1, false));
    map<pi,pi> p;
    p[{stx,sty}]={stx,sty};
    while(!q.empty()){
        pi coor=q.front();
        //cout << ans << " " << coor.f << " " << coor.s << endl;
        q.pop();
        if(vis[coor.f][coor.s]) continue;
        vis[coor.f][coor.s]=true;
        if(x[coor.f][coor.s]=='B'){
            cout << "YES\n";
            string ans="";
            while(coor!=p[coor]){
                REP(i,0,3){
                    int nx=dr[i]+coor.f;
                    int ny=dc[i]+coor.s;
                    if(pi(nx,ny)==p[coor]){
                        ans+=dir[i];
                        coor=p[coor];
                        break;
                    }
                }
            }
            reverse(ans.begin(),ans.end());
            cout << ans.size() << "\n" << ans; 
            return 0;
        }
        REP(i,0,3){
            int nx=dr[i]+coor.f;
            int ny=dc[i]+coor.s;
            if(inside(nx,ny) && x[nx][ny]!='#' && !vis[nx][ny]){
                q.push({nx,ny});
                p[{nx,ny}]=coor;
                //cout << nx << " " << ny << " -> " << coor.f << " " << coor.s << endl;
            }
        }
    }
    cout << "NO";
    return 0;
}