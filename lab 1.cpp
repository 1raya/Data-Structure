
//  Created by Raya Almohaimeed on 16/09/2021.
//  Copyright © 2021 Raya Almohaimeed. All rights reserved.

/* Create a program that performs the following actions:
 1- construct a structure student
 2- a function with the following prototype void fill(student []) filled by user
 3- function to print the array fields void print (student [])
*/


#include <stdio.h>
#include <iostream>
using namespace std;

struct student{
    int ID;
    char name [10];
    float grade;
    char e_mail[20];
};
 
void fill (student f []){
 
    for(int i =0; i<=3;  i++){
    cout <<"\n Enter Your Information: \n";
    cout<<"ID: ";
    cin>>f[i].ID;
    cout<<"Name: ";
        cin >>f[i].name;
    cout<<"Grade: ";
    cin>>f[i].grade;
    cout<<"E-mail: ";
    cin>>f[i].e_mail;
    cout<<"\n Thanks " << f[i].name;
    cout<<endl;
    }}

void print (student p[]){
    cout<<"\n\t Students Information \n";
     cout<<"--------------------------------------\n";
    for(int i =0; i<=3;  i++){
         cout<<"ID: " << p[i].ID <<endl;
         cout<<"Name: " << p[i].name <<endl;
         cout<<"Grade: " << p[i].grade <<endl;
         cout<<"E-mail: " << p[i].e_mail <<endl;
         cout<<"--------------------------------------\n";
    } }


int main(){
    student R [3]; //create an array of the 4 students
    fill(R); // send the array to the first function
    print(R); // send the array to the second function
    return 0; }
