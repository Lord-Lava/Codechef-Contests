#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int pref[n];
    int sum=0;

    int ans=0;

    vector<int>fin;

    int ctr=0;

    int count=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            count++;
        }
    }
    cerr<<count<<"c "<<endl;

    for (int i = 0; i < k; i++)
    {
        if(arr[i]==1){
            ctr++;
        }
    }
    
    fin.push_back(ctr);

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        pref[i]=sum;
    }
    
    for (int i = 1; i <= n-k; i++)
    {
        int x;
        x=pref[i+k-1]-pref[i-1];
        fin.push_back(x); 
    }
    
    sort(fin.begin(),fin.end());

    for (int i = 0; i < fin.size(); i++)
    {
        cerr<<fin[i]<<" ";
    }//

    cerr<<endl;

    for (int i = 0; i < fin.size(); i++)
    {
        count-=fin[i];

        // cerr<<count<<"v "; 
        
        if(fin.size()==1){
            ans+=fin[i]*(fin[i]+1)/2;
        }
        else{
            if(count==0){
                ans+=fin[i];
            }
            else if(count>0){
                ans+=fin[i]*(fin[i]+1)/2;
            }
        }
        
        if(count<=0){
            break;
        }
    }
    
    cout<<ans<<endl;
    
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