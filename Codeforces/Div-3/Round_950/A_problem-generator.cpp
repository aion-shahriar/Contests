#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;

        string s; cin>>s;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else if(s[i]=='C') c++;
            else if(s[i]=='D') d++;
            else if(s[i]=='E') e++;
            else if(s[i]=='F') f++;
            else if(s[i]=='G') g++;
        }
        int ans=0;
        while(m--) {
            if(a==0) ans+=1;
            if(b==0) ans+=1;
            if(c==0) ans+=1;
            if(d==0) ans+=1;
            if(e==0) ans+=1;
            if(f==0) ans+=1;
            if(g==0) ans+=1;
            
            if(a>0) a-=1;
            if(b>0) b-=1;
            if(c>0) c-=1;
            if(d>0) d-=1;
            if(e>0) e-=1;
            if(f>0) f-=1;
            if(g>0) g-=1;
            
        }
        cout<<ans<<"\n";
    }

    
    return 0;
}
