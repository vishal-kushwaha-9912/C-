#include<iostream>
using namespace std;
int main()
{
    // WAP to print the reverse the number.
    
    int num;//int num=123456789;
cout<<"enter the num:";
cin>>num;
    int ans=0;
    
   
    while(num!=0){
        int lastdigit=num%10;
        num=num/10;

        ans = ans*10+lastdigit;
    }
    cout<<ans<<endl;


// this is binary to decimal conversion

/*
  int num =19,ans=0,mul=1;

  while (num!=0){

    //remainder
 int rem =num%2;
 //divdie 

 num=num/2;
 ans =ans+rem*mul;
  mul = mul*10;

}
 cout<<ans<<endl;
  */
    return 0;
}

