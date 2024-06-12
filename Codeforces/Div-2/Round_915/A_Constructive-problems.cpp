#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--) {
        int x,y;
        cin>>x>>y;
        cout<<max(x,y)<<"\n";
    }
    return 0;
}
