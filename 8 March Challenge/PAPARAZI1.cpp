#include <bits/stdc++.h>
using namespace std;

#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define ld long double
const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    if(n==2){
        cout<<"1"<<endl;
        return;
    }

    ll ans = 0;
    bool flag = 0;
    int j = n - 1;

    for (int i = 1; i <= n; i++)
    {
        ld m = (ld)(arr[j] - arr[i]) / (j - i);
        flag = 0;
        for (int k = i + 1; k < j; k++)
        {
            ld intr = (ld)m * (k - i) + arr[i];
            if ((ld)arr[k] > intr)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            j--;
        }
        else
        {
            ll t = j - i;
            if (t > ans)
            {
                ans = t;
            }
        }
        
        cout<<j<<"j ";
    }

    cout << ans << endl;
}

int main()
{
    boost

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}