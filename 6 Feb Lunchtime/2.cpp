#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    vector<ll> arr;

    for (int i = 0; i < 10; i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }

    ll k;
    cin>>k;

    ll sum=0;

    ll ans=0;

    bool flag=0;
    

    for (int i=arr.size()-1;i>=0;i--)
    {
        sum+=arr[i];

        if(sum==k){
            if(arr[i]-sum>0){
                ans=i+1;
                break;
            }

            if(arr[i]-sum==0 && i!=0){
                for (int j = i-1; j >= 0; j--)
                {
                    if(arr[j]>0){
                        ans=j+1;
                        break;
                    }
                    flag==1;
                }
                if(flag==1){
                    break;
                }
            }
        }
        else if(sum>k){
            ans=i+1;
            break;
        }
        
    }

    cout<<ans<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
