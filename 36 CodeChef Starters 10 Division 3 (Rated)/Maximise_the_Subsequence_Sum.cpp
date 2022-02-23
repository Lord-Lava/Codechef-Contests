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
    f(i,n) cin>>arr[i];

    sort(arr,arr+n);

    if(arr[0]<0){
        int ctr=0;
        f(i,n){
            if(arr[i]<0){
                ctr++;
            }
        }
        k=min(k,ctr);
        f(i,k){
            arr[i] = -1*arr[i];
        }

        int sum = 0;
        f(i,n){
            if(arr[i]>=0){
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
    }
    else{
        int sum=0;
        f(i,n) sum+=arr[i];
        cout<<sum<<endl;
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