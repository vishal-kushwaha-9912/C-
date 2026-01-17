//WAP to create a number list as user want:

#include<iostream>
using namespace std;
int main()
{
    int count;
    cin>>count;
    for (int num =1;    num<=count;  num++ ) //++num  
        /*(first;           second;          third;)
                                                     INITIALIZATION   *first is where the number starting ( 0 / 1 ). 
                                                     CONDITION   *second is where the  number ending.
                                                     UPDATE    *third   is opertation OR add what to get the next number the user want.
                                                        *num++ (post increment)= is eaqual to (num+) OR num++ means num+1.
                                                     
                                                        *++num  (pre increment)= After the expression is evaluated.
                                                        
                                                        
                                                        */
    
    {
        cout<<num<<"\n ";    //<<"...." = in the double cloths space is define the gape b\w  number that print in the output .
  
    }  
     
    return 0;
}

   