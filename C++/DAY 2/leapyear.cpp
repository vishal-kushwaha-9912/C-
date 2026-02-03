//WAP to check a year is a leap year or not.

#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;

  if((year%400==0)||(year%4==0 && year%100!=0) )
  cout<<"LEAP YEAR";
  
/*
  else if(year%4==0 && year%100!=0)  // != is used for not equal :. == is used for equal.
  cout<<" leap year";
*/
  else
  {
  cout<<"not a leap year";
  }
  return 0;


}