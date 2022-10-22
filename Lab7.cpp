//  Created by Raya Almohaimeed on 28/10/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.
//
#include <stdio.h>
#include <iostream>
using namespace std;
 
struct node {
    int info;
    node* next;
};
// class named Queue
class Queue{
private:
    node *rear, *front;
     
 public:
    //you will need to create a constructor for queue class.
    Queue(){
        front= rear= NULL;
    }
    void enqueue(int item);
    int dequeue();
    int size();
    void display();
    bool is_empty();
};

//is_empty()should return a Boolean value.
bool Queue:: is_empty(){
    if(rear==NULL)
        return true;
    else
        return false;
}
 

void Queue::enqueue(int item){
    node* p= new node;
    p->info= item;
    p->next= NULL;
    if(rear==NULL)
        rear= front= p;
    else{
        rear->next=p;
        rear=p;
    }
}
// you should call a function named is_empty()
int Queue::dequeue(){
    if(is_empty()){
        cout<<"UNDERFLOW\n";
        return -1;
    }
    node* f= front;
    int x= front->info;
    if(front==rear)
        front=rear=NULL;
    else
        front= front->next;
    delete f;
    return x;
}
void Queue::display(){
    node* curr=front;
    cout<<"[";
    while(curr!=NULL){
        cout<<curr->info;
        curr= curr->next;
        cout<<" ";
    }
     
    cout<<"]";
}
int Queue::size(){
    int count=0;
 
    node* curr=front;
    while(curr!=NULL){
        count++;
        curr= curr->next;
    }
    return count;
    }

 
int main() {
   Queue s;
   int inf, ch;
   while(1){
       
       cout<<" \n\n\nOPERATIONS:\n\n 1- Enqueue \n 2- Dequeue  \n 3- Display \n 4- Size of Queue\n 5- EXIT \n\n Your Choice: ";
       cin>>ch;
       switch(ch){
           case 1:
               cout<<"\n Insert an element: ";
               cin>>inf;
               s.enqueue(inf);
               break;
    
           case 2:
           
               s.dequeue();
               break;
               
           case 3:
               s.display();
               break;
           case 4:
               cout<<"\n The size of Queue is: ";
              cout<< s.size();
               break;
           default: exit(0);
       } // end of switch
   } // end of while loop
   return 0; } // end of main ( ) function
