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
#define all(v) v.begin(),v.end()
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int maxPrimefactorNum(int N)
{
    if (N < 2)
        return 0;

    bool arr[N+1];
    memset(arr, true, sizeof(arr));
    int prod = 1, res = 0;
    for (int p=2; p*p<=N; p++)
    {
        if (arr[p] == true)
        {
            for (int i=p*2; i<=N; i += p)
                arr[i] = false;

            prod *= p;
            if (prod > N)
                return res;
            res++;
        }
    }

    return res;
}

void solve(int tests){
    int n,m;
    cin>>n>>m;

    int x = maxPrimefactorNum(m);

    int ans = 0;
    rep(i,1,x+1){
        if(n%i == 0){
            ans = i;
        }
    }

    cout<<ans<<endl;
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