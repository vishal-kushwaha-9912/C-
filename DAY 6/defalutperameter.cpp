#include<iostream>
using namespace std;
//default parameter : A default parameter is a parameter that assumes a default value if a value is not provided in the function call for that parameter.


   void swap(int &a,int &b){  //its pass by reference.
    int c=a;
    a=b;
    b=c;
   }

//default parameter function:

   void printing(int num =5){
    cout<<num<<endl;
   }

   int main(){

   int a=10, b=20;

    swap(a,b);

    cout<<a<<"  "<<b<<endl;

 printing(10); //argument provided
 printing();   //no argument provided , so default parameter will be (provided it) consider.


    return 0;

   }
// DAY 6 COMPLETED.


//work


//WAP to function with the help of prime number.
// WAP to function with the help of armstrong number.
//WAP to function with the help of swap three number (a,b,c).
//WAP to  sum of 0.1 and 0.2 .