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

string shrink(string s) {
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
    int n;string s;
    cin>>n>>s;
    map<char,int>mp;
    f(i,n){
        mp[s[i]]++;
    }

    if(n&1){
        no
        return;
    }

    vii v;
    for(auto it:mp){
        if(it.S>n/2){
            no
            return;
        }
        v.pb(MP(it.S,it.F));
    }

    sort(all(v));
    string temp;
    string ans;

    f(i,(int)v.size()){
        temp+=v[i].S;
    }

    temp = shrink(temp);

    while(n--){
        f(i,temp.size()){
            if(mp[temp[i]]){
                ans+=temp[i];
                mp[temp[i]--];
            }
        }
    }
    yes
    cout <<ans<<endl;
    
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