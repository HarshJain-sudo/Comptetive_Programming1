#include <bits/stdc++.h>
using namespace std;

// lli M=1000000007;
long long int min(long long int a,long long int b) { if(a<b) return a; return b;}
long long int max(long long int a,long long int b) { return (a>b)?a:b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
    vector<long long int>a(n);
    vector<long long int>b(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
     }
    
     for(int i=0;i<n;i++){
        cin>>b[i];
     }

    vector<long long int>ans;
    ans.push_back(b[0]-a[0]);
    long long int  first=b[0];
    for(long long int  i=1;i<n;i++){

        first=max(first,a[i]);
        first=max(first,b[i-1]);
        ans.push_back(max(0,b[i]-first));
    }
    for(long long int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
    
}
