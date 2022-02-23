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

        int odd = 0;
        int even = 0;
        int ans=0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(even==odd){
            ans=odd;
        }
        else{
            ans=min(odd,even);
        }

        cout<<ans<<endl;
    }

    return 0;
}