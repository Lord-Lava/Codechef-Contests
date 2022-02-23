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
    int n;
    cin>>n;

    int arr[2*n];
    set<int>st;
    mi mp;
    f(i,2*n){
        cin>>arr[i];
        mp[arr[i]]++;
        st.insert(arr[i]);
    }

    sort(arr,arr+2*n);

    int mex = arr[2*n-1]+1;
    int ctr=0;
    for(auto it:st){
        if(it!=ctr){
            mex = ctr;
            break;
        }
        ctr++;
    }

    for(auto it:mp){
        if(it.S == 1 && mex>it.F){
            no
            return;
        }
    }

    yes


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