// https://www.codechef.com/START227D/problems/BANKGLITCH

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int a,b,x,y; cin>>a>>b>>x>>y;
	    if(x>a) {
	       // no exchange
	        cout<<a+b<<"\n";
	    }
	    else {
	        int no_exchange=a+b;
	        int curr_a=a-x;
	        int curr_b=b+y;
	        int after_full_exchange=curr_a+curr_b;
	        int after_multiple_exchange=0;
	        
	        if(a%x==0) {
	            int exchange_cnt = a/x;
	            after_multiple_exchange=a-exchange_cnt+b+(exchange_cnt*y);
	        }
	        cout<<max(no_exchange,max(after_full_exchange,after_multiple_exchange))<<"\n";
	    }
	}
	return 0;
}
