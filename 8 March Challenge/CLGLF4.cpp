#include <bits/stdc++.h>
using namespace std;

#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
const int mod = 1e9 + 7;

void solve()
{
    ll n, e, h, a, b, c;
    cin >> n >> e >> h >> a >> b >> c;

    ll minCost = min(a, min(b, c));

    ll o=e/2,cm=h/3,cc=e+h;

    ll temp = n;

    ll cost = 0;

    if (e >= n && h >= n)
    {
    }
    else if (e / 2 >= n && h < n)
    {
        while (temp){
            if (minCost == a && e>0)
            {
                temp-=o;
                cost+=a*temp;
                e-=temp;
                minCost = min(b,c);
                cout<<cost<<endl;
                return;
            }
            else if (minCost == b && h>0)
            {
                temp-=cm;
                cost+=b*cm;
                h=0;
                minCost = a;
            }
            else if(minCost == c && h>0 && e>0)
            {
                temp-=cc;
                cost+=c*cc;
                h=0;
                e-=temp;
                minCost = min(a,b);
            }
        }    
    }
    else if (h / 3 >= n && e < n)
    {

    }
    else if(){

    }
    else
    {
        cout << "-1" << endl;
    }
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