#include <bits/stdc++.h>

#define ll long long int

using namespace std;

void solve(){
    int n;
    cin>>n;
    string ans="200";
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]=="stop" && arr[i+1]=="stop"){
            ans="404";
        }
    }

    if(arr[0]=="stop"){
        ans="404";
    }

    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}