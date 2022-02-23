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
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int j = 0;
    while(s[j]!='1'){
        j++;
    }

    vi v;

    int temp = j+1;

    rep(i,temp,n){
        if(s[i] == '1'){
            v.pb(i-j);
            j = i;
        }
    }

    int ctr=0;

    f(i,(int)v.size()-1){
        
    }

    f(i,v.size()){
        cerr<<v[i]<<" ";
    }cerr<<endl;
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