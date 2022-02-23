#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

int orV(vector<int>v){
    int o=0;
    for (int i = 0; i < v.size(); i++)
    {
        o=o|v[i];
    }
    return o;
}

void solve(){
    int n,q;
    cin>>n>>q;

    int arr[n];

    vector<int>v;
    v.clear();

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];    
    }

    int a=arr[0];

    for (int i = 0; i < n; i++)
    {
        a=a&arr[i];
        v.push_back(a);
        if(i!=0)
            v.push_back(arr[i]);
    }

    a=arr[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        a=a&arr[i];
        v.push_back(a);
    }

    cout<<orV(v)<<endl;

    for (int i = 0; i < q; i++)
    {
        int x,v;
        cin>>x>>v;

        arr[x-1] = v;

        int a=arr[0];

        vector<int>vi;
        vi.clear();

        for (int i = 0; i < n; i++)
        {
            a=a&arr[i];
            vi.push_back(a);
            if(i!=0)
                vi.push_back(arr[i]);
        }

        a=arr[n-1];

        for (int i = n-2; i >= 0; i--)
        {
            a=a&arr[i];
            vi.push_back(a);
        }
        cout<<orV(vi)<<endl;
    }
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}