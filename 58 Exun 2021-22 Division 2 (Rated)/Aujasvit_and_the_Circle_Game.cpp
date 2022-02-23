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
    int m,x;
    cin>>m>>x;

    if(m>x){
        m--;
        for (int i = 1; i < m; i++)
        {
            if(i&1){
                cout<<1<<" ";
            }else{
                if(m&1){
                    cout<<i<<" ";
                }else{
                    cout<<1<<" ";
                }
            }
        }
        cout<<endl;
        return;
    }

    m--;

    if(m<=2){
        for (int i = 1; i <= x; i++)
        {
            cout<<1<<" ";
        }cout<<endl;  
        return;
    }

    if(m==0){
        for (int i = 1; i <= x; i++)
        {
            cout<<i<<" ";
        }cout<<endl;  
        return;
    }

    for (int i = 1; i < m; i++)
    {
        if(i&1){
            cout<<1<<" ";
        }else{
            if(m&1){
                cout<<i<<" ";
            }else{
                cout<<1<<" ";
            }
        }
    }

    for (int i = m; i <= x; i++)
    {
        if(m&1){
            cout<<m-1<<" ";
        }else{
            cout<<1<<" ";
        }
    }
    
    cout<<endl;
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