#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int pref[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    pref[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref[i]=arr[i]+pref[i-1];
    }

    int q;
    cin>>q;

    int tot=0;

    for (int i = 0; i < q; i++)
    {
        int x,k;
        cin>>x>>k;

        if(x==1){
            tot = pref[n-1];
        }
        else
            tot = pref[n-1]-pref[x-2];

        if(k>tot)
            k=tot;

        int v=0;    
        int s=0;

        for (int i = x-1; i < n; i++)
        {
            k-=arr[i];
            if(k>=0){
                    s+=arr[i]*v;
                    arr[i]=0;
            }
            else{
                s+=(k+arr[i])*v;
                arr[i]-=k+arr[i];
                break;
            }
            v++;
        }
        cout<<s<<endl;
    }
}

signed main(){
    boost

        solve();

    return 0;
}