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

int arr[62];

bool slv(int n,bool f){
    if(n==1){
        return f;
    }
    if(n==2){
        return !f;
    }
    if(n&1){
        slv(--n,f);
    }

    f(i,62){
        if(n%arr[i] == 0){
            slv(n/arr[i],f);
        }
    }
    return slv(n,f);
}

void solve(int tests){
    int n;
    cin>>n;

    bool f = 1;

    bool ans = slv(n,f);

    if(ans){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
    }
}

signed main(){
    boost

    int x=1;

    f(i,62){
        x*=2;
        arr[i] = x;
    }

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}