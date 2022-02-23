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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int arr[n];
    f(i,n)arr[i] = s[i] - '0';

    int ans = 0;
    int pos = n;

    f(i,n){
        int rem = 10 - arr[i]; //10 - 3 = 7
        if(rem > k){
            pos = i;
            break;
        }
        k-=rem;               //k = 18
        rem += (k/10)*10;    //17
        k = rem;
        ans++;
    }
    while(pos<n && arr[pos] == 0){
        ans++;
        pos++;
    }
    
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