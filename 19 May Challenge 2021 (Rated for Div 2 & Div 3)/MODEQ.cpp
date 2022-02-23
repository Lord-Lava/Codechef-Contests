#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second

void solve(){
    int n,m;
    cin>>n>>m;
    
    int sum=n-1;

    vector<int>v1;
    vector<int>v2;

    int ctr=0;
    
    for(int i=2;i<=n;i++){
    	if(m%i==0){
            ctr++;
            v1.push_back(i);
        }
        else{
            v2.push_back(i);
        }
    }

    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }cout<<"\n";

    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }cout<<"\n";

    int x1 = ctr;

    sum+=x1*(x1-1)/2;
    // cout<<sum<<endl;

    int c=0;

    for(int i=0;i<v1.size();i++){
        for (int j = 0; j < v2.size(); j++)
        {
            if(v2[j]%v1[i]==0){
                c++;
            }
        }
    }
    sum+=c;
    // cout<<sum<<endl;

    if(n>m){
        sum+=(n-m+1)*(n-m)/2;
    }
    
    // cout<<sum<<endl;
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}