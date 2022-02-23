#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int n,k;
       cin>>n>>k;

       int arr[n];

       string ans="NO";

       for(int i=0;i<n;i++){
           cin>>arr[i];
       }

       bool flag=0;

           for(int i=0;i<n;i++){
                if(arr[i]<k){
                    ans="NO";
                    flag==1;
                }
                if(flag==1){
                    continue;
                }
            }

            if(k%2==0){
                
            }



        cout<<ans<<endl;
    }

    return 0;
}