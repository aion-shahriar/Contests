#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	
	while(t--) {
	    int n; cin>>n;
	  
	    vector<int>a(n),b(n);
	        
        for(int i=0;i<n;i++) a[i]=i+1;
        
        int rot=(n+1)/2;
        
        for(int i=0;i<n;i++) b[i]=a[(i+rot)%n];
        
        for(int val : a) cout<<val<<" ";
        cout<<"\n";
        
        for(int val : b) cout<<val<<" ";
        cout<<"\n";
	}
	return 0;

}
