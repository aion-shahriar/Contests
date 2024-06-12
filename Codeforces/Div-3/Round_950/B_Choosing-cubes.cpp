#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,f,k; cin>>n>>f>>k;

        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        int fav_b_sort=arr[f-1];
        int cnt=0,cnt2=0,cnt3=0;
        for(int i=0;i<n;i++) {
            if(arr[i]==fav_b_sort) cnt++;
        }

        sort(arr.begin(),arr.end(),greater<int>());
        string ans="";
        for(int i=0;i<k;i++) {
            if(arr[i]==fav_b_sort) {
                cnt2++;
            }
        }
        for(int j=k;j<n;j++) {
            if(arr[j]==fav_b_sort) {
                cnt3++;
            }
        }
        
        if(cnt2==cnt && cnt3==0) ans="YES";
        else if(cnt2>0 && cnt3>0) ans="MAYBE";
        else if(cnt2==0 && cnt3>0) ans="NO";

        cout<<ans<<"\n";
    }

    
    return 0;
}
