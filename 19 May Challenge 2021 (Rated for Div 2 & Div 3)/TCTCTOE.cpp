#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
#define boost                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define F first
#define S second

void solve() {
  vector<string> v;

  for (int i = 0; i < 3; i++) {
    string s;
    cin >> s;
    v.pb(s);
  }

  int x = 0, o = 0, d = 0;

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      if (v[i][j] == 'X')
        x++;
      else if (v[i][j] == 'O')
        o++;
      else
        d++;
    }
  }
  
  	if(x-o>1 || o>x){
  		cout<<3<<endl;
  		return;
  	}

    int countX = 0;
    int countO = 0;
    
    int colX=0,rowX=0,colO=0,rowO=0,dx=0;
    
    for (int i = 0; i < 3; i++) {
      int ctrx = 0,ctro=0;
      for (int j = 0; j < 3; j++) {
      	if(v[i][j]=='_')continue;
        if (v[i][j] == 'X') ctrx++;
        else ctro++;
      }
      if (ctrx == 3){
      	countX++;
      	rowX++;
      } 
      if (ctro == 3){
      	countO++;
      	rowO++;
      } 
    }
    
    for (int i = 0; i < 3; i++) {
      int ctrx = 0,ctro=0;
      for (int j = 0; j < 3; j++) {
      	if(v[j][i]=='_')continue;
        if (v[j][i] == 'X') ctrx++;
        else ctro++;
      }
      if (ctrx == 3){
      	countX++;
      	colX++;
      } 
      if (ctro == 3){
      	countO++;
      	colO++;
      } 
    }
    
    if(v[0][0] =='X' && v[1][1]=='X' && v[2][2]=='X') countX++;
    	
    if(v[0][0] =='O' && v[1][1]=='O' && v[2][2]=='O') countO++;
    	
    if(v[0][2] =='X' && v[1][1]=='X' && v[2][0]=='X') countX++;
    
    if(v[0][2] =='O' && v[1][1]=='O' && v[2][0]=='O') countO++;
    
    dx=countX-rowX-colX;
    
    // cout<<countX<<" "<<countO<<" "<<rowX<<" "<<colX<<" "<<dx<<"\n";
    
    if(countX>0 && countO >0){
    	// cerr<<"y1\n";
    	cout<<3<<endl;
    }
    else if(countX + countO == 0){
    	// cerr<<"y2\n";
    	cout<<2<<endl; 
    }
    else if(countX==1){
    	// cerr<<"y3\n";
    	if(o<x)
    		cout<<1<<endl;
    	else
    		cout<<3<<endl;	
    }
    else if(countX == 2){
    	// cerr<<"y4\n";
    	if((rowX==1 && colX==1) || dx==2 || (dx==1 && rowX==1) || (dx==1 && colX==1)){
    		// cerr<<"y41\n";
    		cout<<1<<endl;
    	}
    	else{
    		// cerr<<"y42\n";
    		cout<<3<<endl;
    	}
    }
    else if(countO==1 && countX==0){
    	// cerr<<"y5\n";
    	if(x==o)
    		cout<<1<<endl;
    	else
    		cout<<3<<endl;	
    }
    else{
    	cout<<3<<endl;
    }

}

signed main() {
  boost

      int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}