#include <bits/stdc++.h>
using namespace std;


int main() {
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    long long n,m;
    cin>>n>>m;
    if(m==1){
        int ans = ((n-1)*n)/2;
        cout<<ans<<" "<<ans<<endl;
    }
    else{
        int maxi = ((n-m)*(n-m+1))/2;
        // cout<<maxi<<" ";
        int mini ;
        if(n%m==0){
            n = n/m;
            mini = (n*(n-1))/2;
            mini*=m;
        }
        else{
            // cout<<"1"<<endl;
            n = n/m;
            mini = (n*(n-1))/2;
            n++;
            mini = mini + (n*(n-1))/2 ;
        }
         // cout<<mini<<endl;
        cout<<mini<<" "<<maxi<<endl;
    }
}
