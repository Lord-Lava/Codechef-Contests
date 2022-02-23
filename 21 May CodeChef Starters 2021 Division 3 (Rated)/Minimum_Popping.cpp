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

void solve(int tests){
    int n,m;
    cin>>n>>m;

    vi v;

    f(i,m){
        int x;
        cin>>x;
        v.pb(x);
    }

    mi mx;

    f(i,m){
        mx[v[i]]++;
    }

    if(mx.size()==m && n == m){
        cout<<n<<endl;
        return;
    }
    vi r = v;
    reverse(r.begin(),r.end());

    map<int,vi>fr;
    map<int,vi>bc;

    f(i,m){
        fr[v[i]].pb(i);
        bc[r[i]].pb(i);
    }

    vector<pair<int,vi>>mp;
    vector<pair<int,vi>>mr;

    for(auto x: fr){
        mp.pb(MP(x.F,x.S));
    }

    for(auto x: bc){
        mr.pb(MP(x.F,x.S));
    }
    
    int f = 0, b=0;
    int ctr=0;

    for(int i=1;i<=n;i++){
        if(mp[i][0]<=mr[i][0]){
            ctr+=mp[i][0]+1-f;
            f+=mp[i][0]+1;
        }
        else if(mr[i][0]<mp[i][0]){
            ctr+=mr[i][0]+1-b;
            b+=mr[i][0]+1;
        }
    }

    cout<<ctr<<endl;
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