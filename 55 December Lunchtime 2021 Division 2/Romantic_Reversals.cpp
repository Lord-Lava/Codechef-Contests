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

void solve(int tests){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    string ans(n,'.');

    int j = k-1;
    for(int i =0;i<k && j>=0;i++){
        ans[j] = s[i];
        s[i] = '-';
        j-=2;
    }

    string temp;
    f(i,n){
        if(s[i] != '-'){
            temp.pb(s[i]);
        }
    }

    int l = 0;
    
    j+=3;
    f(i,n){
        if(ans[i]=='.'){
            ans[i] = temp[l];
            l++;
        }
    }

    cout<<ans<<endl;
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