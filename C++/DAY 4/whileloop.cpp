/// WAP TO find the given sum of the digits.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    while (num)
    {
       int rem =num%10;
       sum =sum+rem;
       num=num/10;
    }
    cout<<"Total sum is:"<<sum;
    return 0;


}

//  #DAY 4 COMPLETE . 