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

bool isPalin(string s){
    int n = s.size();
    f(i,n/2){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}

void solve(int tests){
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    int ctr=0;

    vi v;

    f(i,s.size()){
        if(s[i]=='1'){
            ctr++;
            v.pb(i);
        } 
    }

    if(ctr==1 || ctr == n){
        cout<<0<<"\n";
        return;
    }

    if(ctr==0){
        cout<<1<<endl;
        return;
    }

    bool f = 0;

    int d = ((n-1)-v[v.size()-1])+v[0];

    f(i,v.size()-1){
        if((v[i+1]-v[i]-1)!=d){
            f=1;
            break;
        }
    }

    if(!f){
        cout<<0<<endl;
        return;
    }

    int a1 = n-ctr;
    cout<<min(a1,ctr-1)<<endl;
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