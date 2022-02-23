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

void solve(int tests){
    int n;
    cin>>n;

    int arr[n];
    int a[n];
    int sum = 0;
    vi v0;vi v1;
    f(i,n){
        cin>>arr[i];
        if(i&1){
            v1.pb(arr[i]);
        }else{
            v0.pb(arr[i]);
        }
    }

    sort(v1.begin(),v1.end());
    sort(v0.begin(),v0.end(),greater<int>());

    int x = v1.size(), y = v0.size();
    int i =0;
    int j=0;
    vi v;
    int ctr=0;
    while(i<x && j<y){
        if(ctr&1){
            v.pb(v1[i]);
            i++;
        }else{
            v.pb(v0[j]);
            j++;
        }
        ctr++;
    }

    while(i<x){
        v.pb(v1[i]);
        i++;
    }
    while(j<y){
        v.pb(v0[j]);
        j++;
    }

    int ans = 0;

    for(int i=0;i<n;i+=2){
        for(int j=i+1;j<n;j+=2){
            ans+=v[i]*v[j];
        }
    }

    f(i,v.size()){
        cout<<v[i]<<" ";
    }cout<<endl;

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