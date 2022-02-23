#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll s;
    cin>>s;

    ll Q[s];
    vector<ll>E;

    ll Esum=0;

    for (int i = 0; i < s; i++)
    {
        cin>>Q[i];
    }

    for (int i = 0; i < s; i++)
    {
        int y;
        cin>>y;

        for (int j = 0; j < y; j++)
        {
            int x;
            cin>>x;
            E.push_back(x);
        }

        for (int j = 0; j < y; j++)
        {
            if(j==0){
                Esum+=E[j];
            }
            else{
                Esum+=E[j]-Q[j];
            }
        }
    }
    
    cout<<Esum<<endl;
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