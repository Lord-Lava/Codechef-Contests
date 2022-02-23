#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;

    vector<string>v;
    v.clear();

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    int ctr=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(v[i][j]=='1')ctr++;
        }
    }

    int mk=0;
    int ch=0;
    bool flag=0;

    int counter=0;

    for (int i = 0; i < n; i++)
    {
        int cont=0;
        for (int j = 0; j < m; j++)
        {
            if(v[i][j]=='1'){
                if(j-1>=0 && v[i][j-1]=='1'){
                    cont++;
                    continue;
                }
                if(j+1<=m-1 && v[i][j+1]=='1'){
                    cont++;
                    continue;
                }
                if(i-1>=0 && v[i-1][j]=='1'){
                    cont++;
                    continue;
                }
                if(i+1<=n && v[i+1][j]=='1'){
                    cont++;
                    continue;
                }
                break;
            }
        }

        if(flag==0){
            mk+=cont;
            flag=1;
            counter++;
        }
        else{
            ch+=cont;
            int flag=0;
            counter++;
        }

        ctr-=cont;
    }

    if(ctr%2==0){
        mk+=ctr/2;
        ch+=ctr/2;
    }
    else{
        if(counter%2==0){
            mk+=(ctr/2)+1;ch+=ctr/2;
        }
        else{
            ch+=(ctr/2)+1;mk+=ctr/2;
        }
    }

    cout<<ch<<endl;
    
}

signed main(){
    boost

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}