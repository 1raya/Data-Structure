//  Created by Raya Almohaimeed on 16/09/2021.
//  Copyright © 2021  Raya Almohaimeed  . All rights reserved.

#include <iostream>
using namespace std;


//1st: A function to insert one value into an array given the position of it.

void Insert (int item,int k, int a[], int *n){
    
    if(k<0 || k > *n){
    cout<<"\n OUT OF RANGE! \n";
    }
    
    else{
    int j= *n-1;
    while (j>=k){
        a[j+1]=a[j];
        j--;
    }
    a[k]=item;
    (*n)++;
    }
}

//2nd: A function to traverse an array to print its elements.

void Traverse(int a[],int n){
    cout << "\n[";
        for (int i=0 ; i < n ; i++){
            cout << a[i]<<",";}
    cout <<"]\n";
}


int main()
{
    int n ,i;
    //Ask the user to specify the number of the array elements.
    cout<<"Enter the number of elements: ";
    cin >>n;
    
    //Create a dynamic array of the specified size.
    int *a = new int [n];
    
    // Fill the array with any values
    cout<<"\n Enter the elements:  ";
    for ( i=0 ; i < n ; i++){
    cin>>a[i];
}
    
 //Call the insert function and the traverse function after each insert.
    Traverse( a, n);
    Insert(10, 1, a, &n);
    Insert(20, 2, a, &n);
    Traverse( a, n);
    Insert(30, 3, a, &n);
    Insert(40, 4, a, &n);
    Traverse( a, n);
    Insert(50, -5, a, &n);
    Traverse( a, n);
    Insert(90, 900, a, &n);
    Traverse( a, n);
    return 0;
}
