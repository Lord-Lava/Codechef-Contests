#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        int temp=0;

        if(n%2==0){
            temp=n/2;
        }
        else{
            temp=(n/2)+1;
        }

        int arr[n];
        int solved=0;
        string ans="accepted";

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]!=-1){
                solved++;
            }
        }

        if(solved<temp){
            ans="rejected";
        }

        if(ans!="rejected"){
            for (int i = 0; i < n; i++)
            {
                if(arr[i]>k){
                    ans="too slow";
                }
            }
        }

        int count=0;

        if(ans=="accepted"){
            for (int i = 0; i < n; i++)
            {
                if(arr[i]<=1){
                    count++;
                }
                if(arr[i]==-1){
                    count--;
                }
                if(count==n){
                    ans="bot";
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}