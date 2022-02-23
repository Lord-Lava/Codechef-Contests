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
    int n;
    cin>>n;

    int arr[n];

    f(i,n) cin>>arr[i];

    sort(arr,arr+n);

    set<int>st;

    f(i,n-1){
        st.insert(__gcd(arr[i],arr[i+1]));
    }

    int den = 0;

    if(st.size()>2){
        den = 1;
        arr[n-1] = 1;
    }
    else if(st.size()==1){
        den = *st.begin();
        arr[n-1] = den;
    }
    else if(st.size()==2){
        den = *st.begin();
        den1 = *(st.begin()+1);
        arr[n-1] = den;
        int s1 = 0;
        f(i,n){
            s1+=arr[i]/den;
        }
        arr[n-1] = den1;
        int s2=0;
        f(i,n){
            s2+=arr[i]/den1;
        }
        cout<<min(s1,s2)<<endl;
        return;
    }

    int sum = 0;

    f(i,n){
        sum+=arr[i]/den;
    }

    cout<<sum<<endl;
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