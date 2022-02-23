#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int s[n]={0};

    ll ans=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        s[arr[i]-1]=1;
        int count=0;

        bool flg=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==0 && s[i+1]==1){
                flg=1;
                break;
            }
        }
        if(flg==0){
            ans++;
        }
    }

    cout<<ans<<endl;
    
}

int main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}