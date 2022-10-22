//  Created by Raya Almohaimeed on 26/09/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.
//section 532

#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
   int info;
   node *next;
};

class sll{
private:
   node *head;
public:
   sll(){head=NULL;}
   void insertAtBack(int);
   void Traverse();
   int count();
   void sort();
   void fun();
};

//1st function: It adds a new node at the end of the list.
void sll::insertAtBack(int x){
   node * p = new node;
   p-> info=x;
   p-> next=NULL;
   if(head==NULL)
       head=p;
   else{
       node* tail= head;
       while(tail->next)
           tail= tail->next;
       tail-> next=p;
   }
}

//2nd function: It prints the values stored in the list.
void sll::Traverse(){
   node * curr = head;
   if(head==NULL){
       cout<<"List is empty \n";
   }
   
   cout<<"[";
   while(curr){
       cout<<curr->info;
       curr=curr->next;
       cout<<",";
   }
   cout<<"]";
}

//3rd function: It returns the number of nodes stored in the list.
int sll::count() {
   int length=0;
   for ( node *curr = head; curr != NULL;  curr = curr -> next)
       length++;
   return length;
}

//4th function: It sorts the list values using the bubble sort technique.
void sll::sort() {
   
   int n= count();
   int pass, j;
   for ( pass=1; pass < n;  pass++) {
       node* curr= head;
       node* succ= head->next;
       for (j =0; j<n-pass; j++) {
           if (curr->info > succ->info) {
               int hold= curr->info;
               curr ->info = succ->info;
               succ->info = hold;
           }
           curr = curr->next;
           succ= succ->next;
       }
   }
}

//5th function
//Q: Think what this function do!
//Answer: it will reverse the order of entered values.
void sll::fun() {
   node* prev = NULL;
   node* current = head;
   node* next;
   while (current != NULL) {
       next = current->next;
       current->next = prev;
       prev = current;
       current = next;
   }
   head=prev;
}

int main() {
   sll s;
   int inf, ch;
   while(1){
       
       cout<<" \n\n\n\n Linked List Operations\n\n 1- Add New Value to the List \n 2- Traverse the List. \n 3- Sort the List. \n 4- Call fun . \n 5- Exit\n\n\n Your Choice: ";
       cin>>ch;
       switch(ch){
           case 1:
               cout<<"\n Put info/value to Add: ";
               cin>>inf;
               s.insertAtBack(inf);
               break;
               
           case 2:
               cout<<"\n Linked List Values: ";
               s.Traverse();
               break;
               
           case 3:
               
               s.sort();
               cout<<"\n Linked List Values After Sorting:";
               s.Traverse();
               break;
               
           case 4:
               
               s.fun();
               cout<<"\n Linked List Values: ";
               s.Traverse();
               break;
           default: exit(0);
       } // end of switch
   } // end of while loop
   return 0; } // end of main ( ) function
