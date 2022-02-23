#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n,x;
    cin>>n>>x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool flag=0;
    int ans=0;
    int idx=0;

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            idx=i;
            flag=1;
        }
            
    }

    if(flag==0){
        cout<<0<<endl;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(x<arr[i]){
            swap(arr[i],x);
            ans++;
        }
        else if(x==arr[i]){
            continue;
        }
        else{
            cout<<-1<<endl;
            return; 
        }

        int count = 1;
        for(int j=0;j<n-1;j++){
            if(arr[j]<=arr[j+1]){
                count++;
            }
        }
        if(count==n){
            cout<<ans<<endl;
            return;
        }
    }
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