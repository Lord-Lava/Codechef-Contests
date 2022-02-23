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

    int sum = 0;
    int arr[n];
    int o = 0;

    int a = n, b = k;

    f(i,n){
        cin>>arr[i];
        if(arr[i]>0) o++;
        sum+=arr[i];
    }

    if(k==0 || o == 0){
        cout<<sum<<endl;
        return;
    }

    if(o==n){
        cout<<sum+(2*n*k)<<endl;
        return;
    }

    vi v;

    while(a-- && b--){
        f(i,n){
            if(arr[i] > 0){
                v.pb((i+1)%n);
                v.pb((i-1+n)%n);
            }
        }

        f(i,v.size()){
            arr[v[i]]++;
        }

        if(v.size() == 2*n){
            break;
        }
    }

    f(i,v.size()){
        cerr<<v[i]<<" ";
    }cerr<<endl;

    f(i,n){
        cerr<<arr[i]<<" ";
    }cerr<<endl;

    sum = 0;

    f(i,n){
        sum+=arr[i];
    }

    cerr<<b<<endl;

    sum+=2*n*b;

    cout<<sum<<endl;

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