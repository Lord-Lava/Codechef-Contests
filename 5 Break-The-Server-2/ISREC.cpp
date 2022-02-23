#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;

    char arr[n][m];

    string ans="YES";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int i1,j1,i2,j2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]=='1'){
                i1=i;
                j1=j;
                break;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]=='1'){
                i2=i;
                j2=j;
            }
        }
        
    }

    for (int i = i1; i <=i2; i++)
    {
        for (int j = j1; j <=j2; j++)
        {
            if(arr[i][j]=='0'){
                ans="NO";
            }
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