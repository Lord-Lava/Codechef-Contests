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
    int k;
    cin>>k;

    vector<string>v;

    f(i,k){
        string s;
        cin>>s;
        v.pb(s);
    }

    int x = 0;
    f(i,k){
        int c1 = 0, c2 = 0; 
        f(j,v[i].size()){
            if(v[i][j]>='a' && v[i][j]<='m'){
                c1++;
            }
            if(v[i][j]>='N' && v[i][j]<='Z'){
                c2++;
            }
        }
        if(c1==v[i].size() || c2==v[i].size()){
            x++;
        }
    }

    if(x==k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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