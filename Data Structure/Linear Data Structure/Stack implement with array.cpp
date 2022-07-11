   
// Memory Complexity: O(n)
// Insert Time Complexity: O(1)
// Delete Time Complexity: O(1)
// Search Time Complexity: O(n)

 #include <bits/stdc++.h>
 using namespace std;

 int s[100];
 int l=0; // index l (last) to manage the stack

 void push(int x) {
    s[l] = x;
     l++;
 }

   int pop() {
   int x = s[l];
     l--;
    return x;
   }

   bool isEmpty() {
    return l == 0;
   }

  void print() {
    for (int i = 0; i < l; i++) {
       cout<<s[i]<<" ";
    }
    cout<<endl;
  }


int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
   
  

   // Insert numbers from 1 to 5
   for (int i = 1; i <= 5; i++) {
      push(i);
    }
     cout<<"out Stack "<<endl;
    print(); // See the state of the stack

    // Delete the last 2 elements
    pop();
    pop();
     cout<<"stack after delete two elements"<<endl;
    // stack after pop operation
    print(); // See the state of the stack
 
    push(4); // Insert one element
    
    cout<<"Stack after insert "<<endl;

    print(); // See the state of the stack

    // Clear the stack
    while (!isEmpty()) {
	   pop();
    }
    
    cout<<"stack empty"<<endl;
   return 0;
}