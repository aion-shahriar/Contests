#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        char tmp1=s1[0];
        char tmp2=s2[0];

        s1[0]=tmp2;
        s2[0]=tmp1;

        cout<<s1<<" "<<s2<<"\n";
    }

    
    return 0;
}
