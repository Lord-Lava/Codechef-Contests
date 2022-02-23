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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

string ib(int n){
    string s;
    while(n){
        int rem = n%2;
        s+=to_string(rem);
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

void solve(int tests){
    int c;
    cin>>c;

    string s = ib(c);

    int ctr=0;
    int n = s.size();

    int f=0;
    f(i,n){
        if(s[i] == '0'){
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<1<<endl;
        return;
    }

    vvi vc;

    while(){
        
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