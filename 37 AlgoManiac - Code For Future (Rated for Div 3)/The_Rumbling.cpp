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
    int n;
    cin>>n;

    string s;
    cin>>s;

    int x,y;
    cin>>x>>y;

    vi l(n,0),r(n,0);

    f(i,s.size()){
        if(s[i] == 'N'){
            r[i] = min(x,3*y);
            l[i] = min(y,3*x);
        }
        else if(s[i] == 'S'){
            l[i] = min(x,3*y);
            r[i] = min(y,3*x);
        }
        else if(s[i] == 'E'){
            l[i] = min(2*x,2*y);
        }
        else{
            r[i] = min(2*y,2*x);
        }
    }

    int ans = 0;

    f(i,n){
        ans+=l[i];
    }

    int a=ans;

    f(i,n){
        ans = ans-l[i]+r[i];
        a = min(a,ans);
    }

    cout<<a<<endl;
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