#include<iostream>
using namespace std;
int main()
{

                                  //prime number
                                 
    int num;
    cin>>num;
    if(num<2)
    {
        cout<<"NOT A PRIME NUMBER";
    }
    for(int i=2; i<=num-1; i++){
        if(num%i==0){
        cout<<"NOT A PRIME NUMBER";
    
        }
    }

 cout<<"PRIME NUMBER";

    
 
 return 0;
}