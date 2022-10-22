//
//  Lab6.cpp
//  assignment
//
//  Created by Raya Almohaimeed on 14/10/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.
//

/*
 Construct a program to implement a stack of integer numbers using the linked list.
 */

#include <stdio.h>
#include <iostream>
using namespace std;
struct node{
    int info;
    node* next;
};

class Lab6{
private:
    node* top;
public:
    Lab6(){
        top =NULL;
    }
    bool IsEmpty();
    void Push(int);
    int Pop();
    void Traverse();
    int peak();
};
bool Lab6:: IsEmpty(){
    if(top==NULL)
        return true;
    else
        return false;
}

void Lab6:: Push(int item){
    node * p= new node;
    p->info=item;
    p->next= top;
    top =p;
}

int Lab6:: Pop(){
    if(IsEmpty()){
        cout<<"\nUNDERFLOW\n";
        return -1;
    }else{
        node* temp= top;
        int x= top->info;
        top= top->next;
        delete temp;
        return x;
    }
}

void Lab6:: Traverse(){
    cout<<"[";
    for(node* curr=top;curr;curr=curr->next){
        cout<<curr->info;
        cout<<"  ";
    }
    cout<<"]";
}

int Lab6:: peak(){
    if(IsEmpty()){
        cout<<"\nUNDERFLOW\n";
        return -1;
    }else
        return top->info;
    
}


int main() {
   Lab6 s;
   int inf, ch;
   while(1){
       
       cout<<" \n\n\nOPERATIONS:\n\n 1- PUSH \n 2- POP  \n 3- TRAVERSE \n 4- GET THE TOP ELEMENT \n 5- EXIT \n\n Your Choice: ";
       cin>>ch;
       switch(ch){
           case 1:
               cout<<"\n Push an element: ";
               cin>>inf;
               s.Push(inf);
               break;
    
           case 2:
           
               s.Pop();
               break;
               
           case 3:
               s.Traverse();
               break;
           case 4:
               cout<<"\n The top element is:";
              cout<< s.peak();
               break;
           default: exit(0);
       } // end of switch
   } // end of while loop
   return 0; } // end of main ( ) function
