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

bool pal(string s){
    int l = 0;
    int h = s.length()-1;

    while(h > l){
        if(s[l++] != s[h--]){
            return 0;
        }
    }
    return 1;
}

void solve(int tests){
    string s;
    cin>>s;

    int n = s.size();

    if(pal(s)){
        cout<<0<<endl;
        return;
    }

    string temp = s;
    reverse(all(temp));

    int cnt = 0;

    int j = 0;
    f(i,n){
        if(temp[j]==s[i]){
            j++;
        }else{
            cnt++;
        }
    }
    cout<<cnt<<endl;

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