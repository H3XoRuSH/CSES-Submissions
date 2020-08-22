#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a); i<=(b); i++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef pair<ll,ll> pi;
 
int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
 
int r,c;
 
char x[1001][1001];
 
bool inside(int a, int b){
    return (a>=0 && b>=0 && a<r && b<c);
}
 
void flood(int a, int b){
    x[a][b]='#';
    REP(i,0,3){
        int na=a+dr[i];
        int nb=b+dc[i];
        if(inside(na,nb) && x[na][nb]=='.') flood(na,nb);
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> r >> c;
    int ans=0;
    REP(i,0,r-1) REP(j,0,c-1) cin >> x[i][j];
    REP(i,0,r-1) REP(j,0,c-1) if(x[i][j]=='.') { flood(i,j); ans++; }
    cout << ans;
    return 0;
}