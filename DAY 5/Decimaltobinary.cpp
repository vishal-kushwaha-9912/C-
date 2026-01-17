//WAP to convert from decimal to binary number conversion.

#include<iostream>
using namespace std;
int main()
{
    
/*int num = 12;
  while(num!=0){
    //remainder
    int rem = num%2;
    //divide 
    num =num/2;
    cout<<rem;

  }*/
  int num ;
  cin>>num;
  while(num!= 0){
    //remainder
    int rem = num%2;
    //divide 
    num = num/2;
    cout<<num;

  }
  return 0;
}
