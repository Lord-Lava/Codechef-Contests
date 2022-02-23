#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    ll c;
    cin>>c;

    ll temp=c;

    ll d=0;

    while(temp>=1){
        temp/=2;
        d++;
    }

    ll prod=0; ll maxP=INT_MIN;

    for (int i = 1; i < (1<<d); i++)
    {
        for (int j = i+1; j < (1<<d); j++)
        {
            if((i^j)==c){
                prod=i*j;
                maxP=max(maxP,prod);
            }
        }
    }
    cout<<maxP<<endl;
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