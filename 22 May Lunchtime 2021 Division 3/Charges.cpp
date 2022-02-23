#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define fm(it,mp) for(auto it=mp.begin();it!=mp.end();it++)
#define pb push_back
#define fill(a, x) memset(a, x, sizeof(a))
#define MP make_pair
#define F first
#define S second
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mi map<int,int>

void solve(int tests){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int arr[k];

    f(i,k){
        cin>>arr[i];
    }

    if(n==1){
        while(k--)
            cout<<0<<endl;
        return;
    } 

    int d = 0;

    f(i,n-1){
        if((s[i]=='0' && s[i+1] =='1') || (s[i]=='1' && s[i+1] =='0')){
            d+=1;
        }
        else if((s[i]=='1' && s[i+1]=='1') || (s[i]=='0' && s[i+1]=='0')){
            d+=2;
        }
    }

    vi ans;   

    for(int i=0; i<k;i++){
        int j = arr[i] - 1;
        if(j == 0){
            if(s[0]=='1'){
                s[0] ='0';
                if(s[1] == '1'){
                    d-=1;
                }
                else{
                    d+=1;
                }
            }
            else if(s[0]=='0'){
                s[0] ='1';
                if(s[1] == '1'){
                    d+=1;
                }
                else{
                    d-=1;
                }
            }
            ans.pb(d);
        }
        else if(j == n-1){
            if(s[n-1]=='1'){
                s[n-1] ='0';
                if(s[n-2] == '1'){
                    d-=1;
                }
                else{
                    d+=1;
                }
            }
            else if(s[n-1]=='0'){
                s[n-1] ='1';
                if(s[n-2] == '1'){
                    d+=1;
                }
                else{
                    d-=1;
                }
            }
            ans.pb(d);
        }
        else{
            if(s[j]=='1'){
                s[j] ='0';
                if(s[j-1] == '0' && s[j+1] == '0'){
                    d+=2;
                }
                else if(s[j-1] == '1' && s[j+1] == '1'){
                    d-=2;
                }
            }
            else if(s[j]=='0'){
                s[j] ='1';
                if(s[j-1] == '0' && s[j+1] == '0'){
                    d-=2;
                }
                else if(s[j-1] == '1' && s[j+1] == '1'){
                    d+=2;
                }
            }
            ans.pb(d);
        }
    }

    f(i,k){
        cout<<ans[i]<<"\n";
    }
}

signed main(){
    boost

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}