#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1e9 + 7;

int arr[1000][1000];

void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    int a = x1-1;
    int b = y1-1;
    int c = x2-1;
    int d = y2-1;

    x2*=2;
    y2*=2;

    int num = 1;
    for (int k = 0; k < x2; k++) {
        int row = 0, col = k;
        while (col >= 0) {
            arr[row][col] = num;
            row++, col--;
            num++;
        }
    }

    for (int j = 1; j < y2; j++) {
        int col = y2 - 1, row = j;
        while (row < x2) {
            arr[row][col]= num;
            row++, col--;
            num++;
        }
    }
    
    // for (int i = 0; i < x2; i++)
    // {
    //     for (int j = 0; j < y2; j++)
    //     {
    //         cout<<arr[i][j]<<" ";  
    //     }cout<<"\n";
    // }

    int sum =0;

    for (int i = a; i <= c; i++)
    {
        sum+=arr[i][b];
    }

    for (int j = b+1; j<= d; j++)
    {
        sum+=arr[c][j];
    }
    
    cout<<sum<<endl;
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