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

vector<int> prime_factor(int n , bool fl){
    vector<int>ve;
    vector<int>vo;
    while(n%2==0){
        ve.pb(2);
        n/=2;
    }

    for(int i=3;i*i<n;i+=2){
        while(n%i==0){
            vo.pb(i);
            n/=i;
        }
    }
    
    if(n>2){
        if(n%2==0){
            ve.pb(n);
        }
        else{
            vo.pb(n);
        }
    }

    if(fl==1){
        return vo;
    }
    return ve;
}

void solve(int tests){
    int n,a,b;
    cin>>n>>a>>b;

    if(a==0 && b==0){
        cout<<0<<endl;
        return;
    }

    vi vo = prime_factor(n,1);
    vi ve = prime_factor(n,0);

    int x = ve.size();
    int y = vo.size();

    int ctr=0;

    if(a>=0 && b>=0){
        ctr=x*a+y*b;
    }
    else if(a>=0 and b<0){
        ctr=x*a;
        if(x==0){
            ctr = b;
        }
    }else if(a<=0 and b>=0){
        if(x)
            ctr=a+y*b;
        else ctr = y*b;
    }else{
        if(n%2==0){
            ctr=a;
        }
        else{
            ctr=b;
        }
    }

    cout<<ctr<<endl;
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