//WAP to check the school marks score in grade A,A+,B+,B,C.
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if(marks>=90)
    {
    cout<<"grade : A+";
    }

    else if(marks>80 && marks <= 90)
    {
        cout<<" grade : A";
    }

    else if(marks>70 && marks<= 80)
    {
        cout<<"grade : B+";
    }
         
    else if(marks>60 && marks<= 70)
    {
        cout<<"grade : B";
    }

    else
    cout<<"grade : c";
    return 0;
    
}
//ok