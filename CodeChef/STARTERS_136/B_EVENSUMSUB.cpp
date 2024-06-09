#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int>arr(n);
	    deque<int>dq;
	    long long sum=0;
	    int even=0, odd=0;
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	        dq.push_back(arr[i]);
	        sum+=arr[i];
	        if(arr[i]%2==0) even++;
	        else odd++;
	    }
	    if(sum%2==0) cout<<n<<"\n";
	    else if(n==1 && sum%2==1) cout<<0<<"\n";
	    else {
	        while(n!=0) {
	            int tmp=dq.front();
	            sum-=tmp;
	            n--;
	            if(sum%2==0) {
	                cout<<n<<"\n";
	                break;
	            }
	            else {
	                dq.pop_front();
	            }
	            
	            int tmp2=dq.back();
	            sum-=tmp2;
	            if(sum%2==0) {
	                cout<<n<<"\n";
	                break;
	            }
	            else {
	                dq.pop_back();
	            }
	            
	            
	        }
	    }
	    
	    
	}
	return 0;

}
