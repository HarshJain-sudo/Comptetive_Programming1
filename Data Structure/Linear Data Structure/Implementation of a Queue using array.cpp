   
// Memory Complexity: O(n)
// Insert Time Complexity: O(1)
// Delete Time Complexity: O(1)
// Search Time Complexity: O(n)

 #include <bits/stdc++.h>
 using namespace std;

 int q[100];
 int front =0;
 int back =0;


 void push(int x) {
    q[front] = x;
     front++;
 }

   int pop() {
   int x = q[back];
     back++;
    return x;
   }

   bool isEmpty() {
    return front == back;
   }

  void print() {
    for (int i = back; i < front; i++) {
       cout<<q[i]<<" ";
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
     cout<<"our queue "<<endl;
    print(); // See the state of the stack

    // Delete the last 2 elements
    pop();
    pop();
     cout<<"queue after delete two elements"<<endl;
    // stack after pop operation
    print(); // See the state of the stack
 
    push(4); // Insert one element
    
    cout<<"queue after insert "<<endl;

    print(); // See the state of the stack

    // Clear the stack
    while (!isEmpty()) {
	   pop();
    }
    
    cout<<"queue empty"<<endl;
   return 0;
}