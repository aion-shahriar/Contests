#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int x,y;
	    cin>>x>>y;
	    
	    int travelled=x*10;
	    
	    for(int i=1;i<=INT_MAX;i++) {
	        if(((travelled+(100*i))/(10+i))>=y) {
	            cout<<i<<"\n";
	            break;
	        }
	    }
	}
	return 0;

}
