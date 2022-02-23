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
#define all(v) v.begin(),v.end()
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

string comp(string s) {
    string ret = "";
    for(int i = 0; i < s.size(); i++){
        if(ret.size() && ret.back() == s[i]){
        continue;
        }
        ret += s[i];
    }
    return ret;
}

void solve(int tests){
    int n;
    cin>>n;
    string s;
    cin>>s;

    char a = s[0];
    bool f=0;
    f(i,n){
        if(s[i]=s[0]){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<0<<endl;
        return;
    }

    string ans = comp(s);
    
    int w=0,b=0;
    f(i,ans.size()){
        if(ans[i]=='W'){
            w++;
        }else{
            b++;
        }
    }
    cout<<min(w,b)<<endl;
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