#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define fm(it,mp) for(auto it=mp.begin();it!=mp.end();it++)
#define pb push_back
#define fill(a, x) memset(a, x, sizeof(a))
#define MP make_pair
#define F first
#define S second
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mi map<int,int>

bool comp(pair<int,int>p1,pair<int,int>p2){
    return ((double)p1.F/(double)p1.S) > ((double)p2.F/(double)p2.S);
}

void solve(int tests){
    int a,b,c;
    cin>>a>>b>>c;

    int x,y,z;
    cin>>x>>y>>z;

    int p = 0;

    vii v;

    v.pb(MP(x,a));
    v.pb(MP(y,b));
    v.pb(MP(z,c));

    sort(v.begin(),v.end(),comp);

    f(i,3){
        cout<<v[i].F<<" "<<v[i].S<<endl;
    }

    int t = 0;

    f(i,3){
        f(j,20){
            t+=v[i].S;
            cerr<<v[i].S<<" "<<t<<endl;
            if(t<=240){
                p+=v[i].F;
            }
            else{
                cout<<p<<endl;
                return;
            }
        }
    }

    cout<<p<<endl;
    
}

signed main(){
    boost

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}