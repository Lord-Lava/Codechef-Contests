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
    int n,k;
    cin>>n>>k;

    int arr[n];
    f(i,n){
        arr[i] = i+1;
    }

    if(k==n-1){
        cout<<-1<<endl;
        return;
    }

    if(k==n){
        f(i,n){
            cout<<arr[i]<<" ";
        }cout<<endl;
        return;
    }

    rep(i,k,n-1){
        swap(arr[i],arr[i+1]);
    }

    f(i,n){
        cout<<arr[i]<<" ";
    }cout<<endl;


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