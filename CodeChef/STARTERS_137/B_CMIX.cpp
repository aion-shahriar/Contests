#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--) {
	    int n; cin>>n;
	    
	    vector< pair<int,int> > arr(n);

	    for(int i=0;i<n;i++) {
			int x,y;
			cin>>x>>y;
			arr[i].first=x;
			arr[i].second=y;
		}
	    
	    long long mx=INT_MIN;
	    for(int i=0;i<n-1;i++) {
	        for(int j=i+1;j<n;j++) {
	            long long ans=arr[i].first*arr[j].second+arr[i].second*arr[j].first;
	            mx=max(ans,mx);
	        }
	    }
	    cout<<mx<<"\n";
	}
	return 0;

}

