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
    int n,k,l;
    cin>>n>>k>>l;

    int arr[n];
    f(i,n) cin>>arr[i];

    int mx = *max_element(arr,arr+n);

    int ctr=0;
    f(i,n){
        if(arr[i] == mx){
            ctr++;
        }
    }

    if(arr[n-1] == mx && ctr==1){
        cout<<"Yes\n";
    }
    else{
        if(k<=0){
            cout<<"No\n";
        }
        else{
            int d = mx - arr[n-1] + 1;
            int rem = d%k;
            if(rem>0){
                rem = 1;
            }
            if((d/k + rem) < l){
                cout<<"Yes\n";
            } 
            else{
                cout<<"No\n";
            }
        }
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