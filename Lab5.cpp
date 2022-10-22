//  Created by Raya Almohaimeed on 12/10/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.


/* Create a class that construct a two-way linked list of integer numbers as the following figure show: https://ibb.co/P5DLytv
 
Initially when the list is empty, the HEAD and TAIL pointer will be NULL
*/

#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
   int info;
    node* forw;
    node* back;
};

class Lab5{
private:
    node* head;
    node* tail;
 
   
public:
    Lab5(){
        head = NULL;
        tail = NULL;
    }
    void travere_backward();
    void insertAtTail(int);
    node * search (int);
    void insertBefore(int,int);
 };
//1st function
void Lab5:: travere_backward(){
    for (node* curr = tail; curr!=NULL ; curr=curr->back) {
        cout<<curr->info<<"\t";
    }
}
//2nd function
void Lab5:: insertAtTail(int item){
    node* p= new node;
    p->info=item;
    if(head == NULL){
        p->back = p->forw = NULL;
        tail = head = p;
    }
    else{
        p->forw = NULL;
        p->back = tail;
        tail->forw= p;
        tail =p;
        }
}
//3rd function
node *  Lab5:: search (int k){
    for (node*curr = head; curr; curr= curr->forw) {
        if(curr->info ==k)
            return curr;
    }
        return NULL;
}
//4th function
void Lab5:: insertBefore(int k,int item){
    node* p= search(k);
    if(p != NULL){
        node* q= new node;
         q-> info= item;
        q->forw =p;
        q->back = p->back;
        if(p == head){
            head =q;
        }else{
            p->back->forw=q;
            p-> back=q;
            }
        }
    }
int main() {
   Lab5 s;
   int inf, ch;
   while(1){
       
       cout<<" \n\n\nOperations:\n\n 1- Insert At Tail  \n 2- Insert before : \n 3- Traverse backward:\n 4- Exit \n\n Your Choice: ";
       cin>>ch;
       switch(ch){
           case 1:
               cout<<"\n Insert At Tail: ";
               cin>>inf;
               s.insertAtTail(inf);
               break;
    
           case 2:
               cout<<"\n Insert before : ";
               int k;
               cin>>k;
               cin>> inf;
               s.search(inf);
               s.insertBefore(k, inf);
          
               break;
               
           case 3:
               cout<<"\n Traverse backward:  ";
               s.travere_backward();
               
               break;
           default: exit(0);
       } // end of switch
   } // end of while loop
   return 0; } // end of main ( ) function
