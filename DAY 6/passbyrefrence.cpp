#include<iostream>
using namespace std;
//IN pass by refrence( & ) : they both used the same memory location.

//IN pass by value : they both used the diffferent memory location.
/*
void increment(int &n){  //pass by reference.
    n++;

}
int main(){
    
   int a =10;

   increment(a);

   cout<<a<<endl;


}
   */

   void swap(int &a,int &b){  //its pass by reference.
    int c=a;
    a=b;
    b=c;
   }

   int main(){

    int a=10,b=20;

    swap(a,b);

    cout<<a<<"  "<<b<<endl;
    return 0;

   }