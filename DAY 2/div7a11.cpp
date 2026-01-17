//WAP to check if the number divisible by 7or 11 then print "perfect" .and not % 7&11 then print "not perfect".

#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;               // cin>>...  is used to input take from the user .

    if(num%7==0 || num%11==0)  // OR conditio apply .
    cout<<"Perfect";

    else
    cout<<"Not perfect";

    return 0;
}
