//switch case 

// break :  IS USED FOR BREAK THE LOOP .

/*switch (expression)

{
case constant expression:
    case 1:{
       cout<<".....";
        break;
    case 2:{
       cout<<".....";
        break;

default:
cout<<"....";
    break;
}
    END 
*/
#include<iostream>
using namespace std;
int main()
{
    int  day;
    cout<<"Enter your week day:";
    cin>>day;
    switch (day)

    {
    case 1:{
       cout<<"monday";
        break;
    }
    case 2:{
       cout<<"tuesday";
        break;
    }
     case 3:{
       cout<<"wednesday";
        break;
    }
     case 4:{
       cout<<"thursday";
        break;
    }
     case 5:{
       cout<<"friday";
        break;
    }
     case 6:{
       cout<<"saturday";
        break;
    }
     case 7:{
       cout<<"sunday";
        break;
    }
    default:{
        cout<<"invalid day";
         }
        break;
    }
    /*
    if(day == 1 )
    {
        cout<<"monday";

    }
   else if(day == 2)
    {
        cout<<"tuesday";
        
    }
 else if(day == 3 )
    {
        cout<<"wednesday";
     
    }
   else if(day == 4 )
    {
        cout<<"thursday";
        
    }
    else if(day == 5)
    {
        cout<<"friday";
        
    }
    else if (day == 6 )
    {
        cout<<"saturday";
        
    }
  else  if(day == 7)
    {
        cout<<"sunday";
        
    }
    else
    cout<<"invalid day";
*/
    return 0;
    
}