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

string fun(int n,int m,int q){
    string a1 ="Consistent";
    string a2 = "Inconsistent";

    mi mp;

    int ctr = 0;

    vector<pair<char,int>>v;

    while(q--){
        char ch;int i;                  
        cin>>ch>>i;

        v.pb(MP(ch,i));
    }

    f(i,v.size()){
        if(v[i].F == '+'){ 
            mp[v[i].S]++;         
            ctr++;                
        }                   
        else{
            mp[v[i].S]--;
            ctr--;
        }
        
        if(mp[v[i].S]<0){
            return a2;
        }
        if(ctr > m){
            return a2;
        }
    }

    return a1;
}

void solve(int tests){
    int n,m,q;
    cin>>n>>m>>q;

    cout<<fun(n,m,q)<<endl;
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