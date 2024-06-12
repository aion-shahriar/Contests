#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        char arr[n+1][m+1];
        int cnt=0;
        int mx_cnt=INT_MIN;
        int idx_i=0;
        for(int i=1;i<=n;i++) {
            cnt=0;
            for(int j=1;j<=m;j++) {
                cin>>arr[i][j];
                if(arr[i][j]=='#') cnt++;
            }
            if(cnt>mx_cnt) {
                    mx_cnt=cnt;
                    idx_i=i;
                    //cout<<"idx_i="<<idx_i<<"\n";
            }
            //cout<<"mx_cnt="<<mx_cnt<<"\n";
        }
        int start=0;
        int end=0;
        bool ok=false;
        for(int j=1;j<=m;j++) {
            if(arr[idx_i][j]=='#' && ok==false) {
                start=j;
                ok=true;
            }
            if(arr[idx_i][j]=='#') {
                end=j;
            }
        }
        int idx_j=(start+end)/2;

        cout<<idx_i<<" "<<idx_j<<"\n";
        

    }

    
    return 0;
}
