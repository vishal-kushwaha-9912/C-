//WAP to check if it is divisible by 3&5 it is perfect or   not perfect.

#include<iostream>
using namespace std;
int main()
{
    int num1=12;
/* LONG METHOD:

    if(num1%3==0)
    {
         if(num1%5==0)
         cout<<"Perfect";

        else
        cout<<"Not perfect";
      
    }
       else
    cout<<"not perfect";
*/


//SHORT METHOD:

if(num1%3==0 && num1%5==0)  //&& is used for AND 
cout<<"perfect";

else
cout<<"not perfect";

    return 0;

}