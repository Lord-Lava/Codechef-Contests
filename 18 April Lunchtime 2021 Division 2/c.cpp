#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,w,wr; cin>>n>>w>>wr;

    int arr[n];

    map<int,int>mp;
    vector<int>v;

    string ans="NO";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }

    if(wr>=w){
        ans="YES";
    }
    else{
        for (auto i :mp)
        {
            if(i.second%2!=0){
                i.second--;
            }
            v.push_back(i.first*i.second);
        }

        int sum=0;

        for (int i = 0; i < v.size(); i++)
        {
            sum+=v[i];
        }
        
        if(sum+wr>=w){
            ans="YES";
        }
    }
    

    cout<<ans<<endl;
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