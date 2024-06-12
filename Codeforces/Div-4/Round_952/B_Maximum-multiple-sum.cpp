#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        long long two=0;
        long long three=0;

        for(int i=2;i<=n;i+=2) {
            two+=i;
        }
        for(int i=3;i<=n;i*=2) {
            three+=i;
        }
        if(two>three) {
            cout<<2<<"\n";
        }
        else {
            cout<<3<<"\n";
        }

    }

    
    return 0;
}
