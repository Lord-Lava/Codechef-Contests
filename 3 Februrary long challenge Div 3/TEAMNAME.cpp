#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        string s;
        string arr[n];
        char fl[n];
        string rest[n],Orest[n];
        int ans=0;

        for (int i = 0; i < n; i++)
        {
            cin>>s;
            arr[i]=s;
            fl[i]=s[0];
            s.erase(0,1);
            Orest[i]=s;
            rest[i]=s;
        }

        sort(rest,rest+n);
        int Rcount=0;

        for (int i = 0; i < n-1; i++)
        {
            if(rest[i]!=rest[i+1]){
                Rcount++;
            }
        }

        Rcount++;

        cout<<Rcount<<endl;

        sort(fl,fl+n);
        int Fcount=0;

        for (int i = 0; i < n-1; i++)
        {
            if(fl[i]!=fl[i+1]){
                Fcount++;
            }
        }

        Fcount++;

        cout<<Fcount<<endl;

        if(Fcount>1){
            if(Fcount==Rcount){
                ans=0;
            }
        }
        
        cout<<ans<<endl;
    }

    return 0;
}