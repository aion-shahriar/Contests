#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--) {
	    long long n,m;
	    cin>>n>>m;
	    long long ans=0;
	    
	    if(m<n) {
	        ans=n-m;
	    }
	    else if(m==n) {
	        ans=0;
	    }
	    else if(m%n==0) {
	        ans=0;
	    }
	    else {
    	    long long x=m/n;
    	    
    	    long long make=n*(x+1)-m;
    	    long long distroy=m%n;
    	    ans=min(make,distroy);
	    }
	    
	    cout<<ans<<"\n";
	}
	return 0;

}
