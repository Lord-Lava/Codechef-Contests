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

bool isPowerOfTwo (int x)
{
    return x && (!(x&(x-1)));
}

void solve(int tests){
    int n;
    cin>>n;

    bool f = 1;

    while(n>0){
        if(n&1){
            if(isPowerOfTwo(n-1)){
                if(f==0){
                    cout<<"Alice\n";
                }
                else{
                    cout<<"Bob\n";
                }
                return;
            }
            n--;
        }
        else{
            if(n==2){
                if(f==0){
                    cout<<"Alice\n";
                }
                else{
                    cout<<"Bob\n";
                }
                return;
            }
            else if(isPowerOfTwo(n)){
                if(f==1){
                    cout<<"Alice\n";
                }
                else{
                    cout<<"Bob\n";
                }
                return;
            }
            int x = 2;
            while(n%x==0){
                x*=2;
            }
            x/=2;
            n/=x;
        }
        f=!f;
    }

    if(f==0){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
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