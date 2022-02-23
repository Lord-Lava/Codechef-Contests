#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        string ans="1";
        int sum=0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }

        if(sum%2!=0){
            ans="2";
        }

        cout<<ans<<endl;
    }

    return 0;
}