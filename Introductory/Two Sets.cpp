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
    ll n;
    cin >> n;
    if(n&1){
        n-=3;
        if(n>=0 && n%4==0){
            n+=3;
            vector<ll> a,b;
            a.pb(1); a.pb(2);
            b.pb(3);
            REP(i,4,n){
                if(i%4==0){
                    a.pb(i);
                    b.pb(i+1);
                }
                else{
                    b.pb(i);
                    a.pb(i+1);
                }
                i++;
            }
            cout << "YES\n";
            cout << a.size() << endl;
            REP(i,0,a.size()-1) cout << a[i] << " ";
            cout << endl;
            cout << b.size() << endl;
            REP(i,0,b.size()-1) cout << b[i] << " ";
        }
        else cout << "NO";
    }
    else{
        if(n%4==0){
            vector<ll> a,b;
            REP(i,1,n){
                if((i+1)%4==0){
                    b.pb(i);
                    a.pb(i+1);
                }
                else{
                    a.pb(i);
                    b.pb(i+1);
                }
                i++;
            }
            cout << "YES\n";
            cout << a.size() << endl;
            REP(i,0,a.size()-1) cout << a[i] << " ";
            cout << endl;
            cout << b.size() << endl;
            REP(i,0,b.size()-1) cout << b[i] << " ";
        }
        else cout << "NO";
    }
    return 0;
}
