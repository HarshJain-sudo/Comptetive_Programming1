#include<bits/stdc++.h>
using namrspace std;

class Node{
    public:
    	int val;
    	Node* next;

        Node(int val,Node* nextNode){
    	     this->val = val;
    	     this->Node = nextNode;
        }
};
 Node* head = NULL;
 Node* tail = NULL;

 void pushBack(int val){
      void pushBack(int val) {
      Node *newNode = new Node(val, NULL, NULL);
      if (tail == NULL) {
         head = newNode;
          } 
          else {
            newNode->prev = tail;
            tail->next = newNode;
           }
          tail = newNode;
       }
 }

  void pushFront(int val) {
     Node *newNode = new Node(val, NULL, NULL);
       if (head == NULL) {
          tail = newNode;
          }
          else {
            newNode->next = head; 
            head->prev = newNode;
        }
        head = newNode;
   }

   void popFront() {
      if (head != NULL) {
      Node *nextNode = head->next;
      if (nextNode != NULL) {
         nextNode->prev = NULL;
       }
      delete (head);
      head = nextNode;
      if (head == NULL) {
      tail = NULL;
    }
  }

  void popBack() {
       if (tail != NULL) {
          Node *prevNode = tail->prev;
          if (prevNode != NULL) {
              prevNode->next = NULL;
           }
           delete (tail);
           tail = prevNode;
           if (tail == NULL) {
           head = NULL;
        }
    }
}

 int main(){
 	// insert eleemnt in a list
 	pushBack(2);
 	pushBack(3);
 	pushBack(4);
 	pushBack(5);
 	printList();

 	// remove front element
 	popBack();
 	printList();


 	// add five elemt on the top of list

 	pushFront(6);
 	pushFront(7);
 	pushFront(8);
 	pushFront(9);
 	pushFront(10);
 	printList();

 }
