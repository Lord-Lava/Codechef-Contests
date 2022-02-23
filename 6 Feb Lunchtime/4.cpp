#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin>>s;

    vector<int>arr(150,0);

    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i]]++;
    }

    int c1=0;
    int c2=0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]==1){
            c1++;
        }
        else{
            c2+=arr[i];
        }
    }

    c1*=2;

    if(c1<=c2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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