// https://www.codechef.com/problems/BUYTICK

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n,k; cin>>n>>k;
	    vector<int>cost(n);
	    for(int i=0;i<n;i++) cin>>cost[i];
	    string sits; cin>>sits;
	    int len=sits.size();
	    int taken=0, empty=0;
	    for(int i=0;i<len;i++) {
	        if(sits[i]=='0') empty++;
	        else taken++;
	    }
	    vector<int>emp_sits_cost;
	    if(k>empty) cout<<-1<<"\n";
	    else {
	        for(int i=0;i<n;i++) {
	            if(sits[i]=='0'-0) {
	                emp_sits_cost.push_back(cost[i]);
	            }
	        }
	        sort(emp_sits_cost.begin(), emp_sits_cost.end());
	        int res=0;
	        for(int i=0;i<k;i++) {
	            res+=emp_sits_cost[i];
	        }
	        cout<<res<<"\n";
	    }
	}
	return 0;

}
