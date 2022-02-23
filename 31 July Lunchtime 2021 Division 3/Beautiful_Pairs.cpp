#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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

typedef tree<int, null_type, less_equal<int>,
			rb_tree_tag,
			tree_order_statistics_node_update>
	ordered_set;

int getInvCount(int arr[], int n)
{
	int key;
	ordered_set set1;

	set1.insert(arr[0]);

	int invcount = 0;

	for (int i = 1; i < n; i++) {
		set1.insert(arr[i]);
		key = set1.order_of_key(arr[i] + 1);

		invcount += set1.size() - key;
	}
	return invcount;
}

void solve(int tests){
    int n;
    cin>>n;

    int arr[n];
    vi v;

    f(i,n){
        cin>>arr[i];
        v.pb(arr[i]);
    }

    reverse(v.begin(),v.end());

    int arr1[n];

    f(i,n){
        arr1[i] = v[i];
    }

    int ctr = getInvCount(arr,n) + getInvCount(arr1,n);

    cout<<ctr*2<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests = 1;
    cin >> tests;

    for(int i=1;i<=tests;i++){
        solve(i);
    }

    return 0;
}