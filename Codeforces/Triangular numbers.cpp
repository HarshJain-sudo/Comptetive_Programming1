#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n ;
    cin>>n;
    for(int i =1;i<=500;i++){
        if((i*(i+1)) == (2*n)){
            cout<<"yes"<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
    return 0;
}