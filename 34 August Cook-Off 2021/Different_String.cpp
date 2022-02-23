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

    set<string>st;

    f(i,n){
        string s;
        cin>>s;

        st.insert(s);
    }

    vector<string>v;

    for(auto x:st){
        v.pb(x);
    }

    string ans;

    bool f=0;

    f(i,n){
        int on = 0,off = 0;
        f(j,v.size()){
            if(v[j][i] == '1'){
                on++;
            }
            else{
                off++;
            }
        }
        if(on>off){
            ans+='0';
        }
        else if(off>on){
            ans+='1';
        }
        else{
            if(f){
                ans+='1';
                f=0;
            }
            else{
                ans+='0';
                f=1;
            }
        }
    }

    bool fl = 0;

    f(i,v.size()){
        if(v[i] == ans){
            fl=1;
            break;
        }
    }

    if(fl){
        ans = "";
        bool f=0;

        f(i,n){
            int on = 0,off = 0;
            f(j,v.size()){
                if(v[j][i] == '1'){
                    on++;
                }
                else{
                    off++;
                }
            }
            if(on>off){
                ans+='0';
            }
            else if(off>on){
                ans+='1';
            }
            else{
                if(f){
                    ans+='0';
                    f=0;
                }
                else{
                    ans+='1';
                    f=1;
                }
            }
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