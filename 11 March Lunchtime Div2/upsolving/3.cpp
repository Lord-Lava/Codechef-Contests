#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    vector<int>ans;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[j]>arr[i])break;
            if(arr[j]==arr[i])cnt++;
        }

        for (int k = i+1; k < n; k++)
        {
            if(arr[k]>arr[i])break;
            if(arr[k]==arr[i])cnt++;
        }
        
        ans.push_back(cnt);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;
    
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