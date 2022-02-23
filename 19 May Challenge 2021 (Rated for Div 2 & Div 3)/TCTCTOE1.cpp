#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define F first
#define S second

void solve(){
	vector<string>v;
    //input
    f(i,3){
    	string s;
    	cin>>s;
    	
    	v.pb(s);
    }
    //counting number of X and O
    int x=0,o=0;
    f(i,3){
    	f(j,3){
    		if(v[i][j]=='O') o++;
    		if(v[i][j]=='X') x++;
    	}
    }
	//minimal condition    
    if(x>=o and x-o<=1){
    	int rx=0,cx=0,ro=0,co=0,d1x=0,d2x=0,d1o=0,d2o=0;
    	//Consecutive X/O in rows
    	f(i,3){
    		int c1=0;
    		int c2=0;
    		f(j,3){
    			if(v[i][j]=='X') c1++;
    			if(v[i][j]=='O') c2++;
    		}
    		if(c1==3) rx++;
    		if(c2==3) ro++;
    	}
    	
    	//Consecutive X/O in rows
    	f(i,3){
    		int c1=0;
    		int c2=0;
    		f(j,3){
    			if(v[j][i]=='X') c1++;
    			if(v[j][i]=='O') c2++;
    		}
    		if(c1==3) cx++;
    		if(c2==3) co++;
    	}
    	
    	//Consecutive X/O in diagonals
    	if(v[0][0]=='X' and v[1][1]=='X' and v[2][2]=='X') d1x++;
    	if(v[0][2]=='X' and v[1][1]=='X' and v[2][0]=='X') d2x++;
    	if(v[0][0]=='O' and v[1][1]=='O' and v[2][2]=='O') d1o++;
    	if(v[0][2]=='O' and v[1][1]=='O' and v[2][0]=='O') d2o++;
    	
    	// cout<<"rx: "<<rx<<" cx: "<<cx<<" ro: "<<ro<<" co: "<<co<<" d1x: "<<d1x<<" d2x: "<<d2x<<" d1o: "<<d1o<<" d2o: "<<d2o<<"\n";
    	
    	int tx = rx+cx+d1x+d2x;
    	int to = ro+co+d1o+d2o;
    	
    	//checking for various X/O combinations
    	if(x==5){
    		if((tx<=2 && to==0 && x>o) || (to<=1 && tx==0 && o==x)){
    			cout<<1<<"\n";
    		}
    		else{
    			cout<<3<<"\n";
    		}
    	}
    	else if(x==3 || x==4){
    		if((tx==1 && to==0 && x>o) || (to==1 && tx==0 && o==x)){
    			cout<<1<<endl;
    		}
    		else if(tx+to==0){
    			cout<<2<<endl;
    		}
    		else{
    			cout<<3<<endl;
    		}
    	}
    	else{
    		cout<<2<<endl;
    	}
    }
    else{
    	cout<<3<<endl;
    }
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
