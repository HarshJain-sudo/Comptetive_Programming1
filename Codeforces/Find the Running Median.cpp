#include <bits/stdc++.h>
using namespace std;
// #define ulli unsigned long long int;
 priority_queue<int, vector<int>, greater <int> > min_heap;
 priority_queue<int> max_heap;
double get_median()
{
    int total = min_heap.size() + max_heap.size();
    double ret;
    if(total%2 == 1)
    {
        if(max_heap.size() > min_heap.size())
            ret = max_heap.top();
        else
            ret = min_heap.top();
    }
    else
    {
        ret = 0;
        if(max_heap.empty() == false)
            ret += max_heap.top();
        if(min_heap.empty() == false)
            ret += min_heap.top();
        ret/=2;
    }
    return ret;
}

void solve(){
   cout << setprecision(1) << fixed;
   int n ;
   cin>>n;
   int arr[n];
   for(int i =0;i<n;i++)cin>>arr[i];
  
       for(int i =0;i<n-1;i++){
          if( max_heap.size() && arr[i] >= max_heap.top()){
                  min_heap.push(arr[i]);
          }
         else max_heap.push(arr[i]);

          if(abs(max_heap.size() - min_heap.size()) > 1)
          {
              if(max_heap.size() > min_heap.size())
              {
                 int temp = max_heap.top();
                 max_heap.pop();
                 min_heap.push(temp);
              }
              else
              {
                int temp = min_heap.top();
                min_heap.pop();
                max_heap.push(temp);
              }
         }      
       }
       cout<<get_median()<<endl;
      

}
  

int main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    unsigned long long int t;
    cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
}
