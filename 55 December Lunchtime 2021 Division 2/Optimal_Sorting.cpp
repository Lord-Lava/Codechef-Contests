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

pair<int,int> findSubarray(int arr[], int n)
{
    pair<int,int>p;
    int leftIndex = -1, rightIndex = -1;

    int max_so_far = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max_so_far < arr[i]) {
            max_so_far = arr[i];
        }

        if (arr[i] < max_so_far) {
            rightIndex = i;
        }
    }

    int min_so_far = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (min_so_far > arr[i]) {
            min_so_far = arr[i];
        }

        if (arr[i] > min_so_far) {
            leftIndex = i;
        }
    }
 
    if (leftIndex == -1) {
        return make_pair(-1,-1);
    }
 
    return {leftIndex,rightIndex};
}

void solve(int tests){
    int n;
    cin>>n;

    int arr[n];
    f(i,n)cin>>arr[i];

    pair<int,int>p = findSubarray(arr,n);
    pair<int,int>x = {-1,-1};
    if(p==x){
        cout<<0<<endl;
        return;
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = p.F;i<=p.S;i++){
        mini = min(arr[i],mini);
        maxi = max(arr[i],maxi);
    }

    cout<<maxi-mini<<endl;

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