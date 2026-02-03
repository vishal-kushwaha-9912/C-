#include<iostream>
using namespace std;
int main()
{/*
    int num = 11011;

    int ans =0,mul =1;

    while(num!=0){
        int rem =num%10;
        num/=10;

        ans = ans +rem*mul;
        mul*=2;


    }
    cout<<ans;
    cout<<endl;*/


                                 // input by the user.
     int num ;
    cout<<"enter the binary number :";
     cin>>num;


    int ans =0,mul =1;

    while(num!=0){
        int rem =num%10;
        num/=10;

        ans = ans +rem*mul;
        mul*=2;


    }
    //cout<<ans;
    cout<<"In  decimal :"<<ans<<endl;
   
    return 0;

}