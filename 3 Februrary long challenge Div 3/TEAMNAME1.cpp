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

        string arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cout<<arr[i]<<endl;
        }

        int ans=0;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i][0] != arr[j][0]) && (arr[i].substr(1,arr[i].size()-1) != arr[j].substr(1,arr[j].size()-1)))
                {   
                    cout<<arr[i][0]<<" "<<arr[j][0]<<endl;
                    cout<<arr[i].substr(1,arr[i].size()-1)<<" "<<arr[j].substr(1,arr[j].size()-1)<<endl;
                    ans++;                    
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}