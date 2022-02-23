#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;

    int marks[k];
    string solved[n];
    int ans[n]={0};

    for (int i = 0; i < k; i++)
    {
        cin>>marks[i];
    }
   
    for(int i=0;i<n;i++){
        cin>>solved[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(solved[i][j]=='1'){
                ans[i]+=marks[j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    
    
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