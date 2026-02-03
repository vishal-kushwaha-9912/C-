//WAP to print the factorial number.number is given by the user.


#include<iostream>
using namespace std;
int main(){
    long long fact =1;

    int num;
   cout<<"Enter a number to find factorial:";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
    fact =fact*i;
   }
cout<<"answer is:"<<fact<<endl;

return 0;
}


//DAY 5 COMPLETE.