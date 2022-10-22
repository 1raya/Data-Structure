//  Created by Raya Almohaimeed on 01/10/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.


/* Create a class that construct a circular linked list of integer numbers as the following figure show: https://ibb.co/NC3GN7G
Initially when the list is empty, the Last pointer will be NULL
*/

#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
   int info;
   node *next;
};
class Lab4{
private:
    node* Last;
   
public:
    Lab4(){
        Last = NULL;
    }
    void traverse();
    void insertAtBeginning(int);
    void insertAfter(int , int);
 };

//1st function:
void  Lab4:: traverse(){
    if(Last==NULL){
        cout<<"THE LIST IS EMPTY!\n";
    }
    else{
    node* curr = Last->next;
        cout<<"[";
    do{
        
        cout<<curr->info<<",";
        curr=curr->next;
    } while(curr != Last->next);
        cout<<"]";
    }
}

//2nd function:
void Lab4:: insertAtBeginning(int item){
    node *p = new node;
    p->info=item;
    if (Last== NULL){
        p->next=p;
        Last=p;
    }
    else{
        p->next= Last->next;
        Last->next=p;
    }
}

//3rd function:
void Lab4:: insertAfter(int k, int item){
    if(Last==NULL)
        return;
    node* curr = Last->next;
    do{
        if (curr->info == k) {
            node* p = new node;
            p-> info = item;
            p->next= curr->next;
            curr->next=p;
            if (curr == Last) {
                Last = p;
                return;
            }
        }
        curr = curr->next;
    } while(curr != Last->next);{
        cout<<"NOT FOUND!\n";
    }
}


int main() {
   Lab4 s;
   int inf, ch;
   while(1){
       
       cout<<" \n\n\nOperations:\n\n 1- Add New Value at beginning \n 2- Traverse the List \n 3- Insert after element \n 4- Exit\n\n\n Your Choice: ";
       cin>>ch;
       switch(ch){
           case 1:
               cout<<"\n Put info/value to Add: ";
               cin>>inf;
               s.insertAtBeginning(inf);
               break;
               
           case 2:
               cout<<"\n Linked List Values: ";
               s.traverse();
               break;
               
           case 3:
               int af , item;
               cout<<"Enter the number you want to add after it: ";
               cin>>af;
               cout<<"Enter the number you want to add: ";
               cin>>item;
               s.insertAfter(af, item);
          
               break;
           default: exit(0);
       } // end of switch
   } // end of while loop
   return 0; } // end of main ( ) function
