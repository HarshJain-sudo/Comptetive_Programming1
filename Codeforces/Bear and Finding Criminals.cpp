 #include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    int n; 
    cin>>n;
    int a[n],b[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
    bool k = false;
    while(a[0] != b[0] and a[0] >= b[0]){
        for (int  i = 0; i < n; ++i)
        {
            if(a[i] == 0){
              continue;
            }
            a[i]--;

        }
        k = true;
    }
    bool j = true;
    for (int  i = 0; i < n; ++i)
    {
        if(a[i]!=b[i]){
            j = false;
            break;
        }
    }
    if(j and k)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}

    
}



