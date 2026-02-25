// https://www.codechef.com/START227D/problems/DICEERMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t; cin>>t;
	while(t--) {
	    int n,s; cin>>n>>s;
	    int max_possible_num=n*6;
	    int second_max_possible=max_possible_num-n;
	    if(s<=second_max_possible) cout<<max_possible_num<<"\n";
	    else {
	        int extra=s-second_max_possible;
	        cout<<max_possible_num-extra<<"\n";
	    }
	}
	return 0;

}
