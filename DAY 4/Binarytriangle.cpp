#include<iostream>
using namespace std;
int main()
{
    //WAP to print number triangle.
/*
     for(int j=1;j<=5; j++){
        bool num =j%2;

    for(int i=0;i<j;i++){
  cout<<num;
  num = !num;
     }
  cout<<endl;

     }
OUTPUT:
1
01
101
0101
10101
*/


                           //WAP to print alphabets triangle.
/*

for(char j ='B';j<'G';j++){

for(char i='A'; i<j ;i++)

cout<<i<<" ";

cout<<endl;

}
//OUTPUT:

A 
A B
A B C
A B C D
A B C D E
*/
                                          // similar from my self 
/*
for(char j='B';j<'E';j++){

for(char i='A';i<j;i++)

cout<<i;


*/
/*
for(char i='A';i<'C';i++)
cout<<i;
for(char i='A';i<'D';i++)
cout<<i;
for(char i='A';i<'E';i++)
cout<<i;

    cout<<endl;
}
*/


                          //WAP to print alphabets triangle in repeated.


 /* for(int j=0;j<=4;j++){

     char name ='A'+j-1;

  for(int i =0;i<j;i++)
  
  cout<<name;
  cout<<endl;
  }
             
  
      //OR


   for(int i=0;i<1;i++){
   cout<<"A";}
cout<<endl;
 
  for(int i=0;i<2;i++){
   cout<<"B";}
cout<<endl;
 
  for(int i=0;i<3;i++){
   cout<<"C";}
cout<<endl;
 
  for(int i=0;i<4;i++){
   cout<<"D";}
cout<<endl;
 

 OUTPUT :
 A
 BB
 CCC
 DDDD
 
 */




                             //WAP to print the palindrome number triangle.
     
/*
  for(int i =1;i<=4;i++) //gape 
{
    cout<<" ";
}
 for(int i =1;i<=1;i++)   // number you print 
{
    cout<<i;
}
cout<<endl;

  for(int i =1;i<=3;i++)
{
    cout<<" ";
}
 for(int i =1;i<=2;i++)
{
    cout<<i;
}
 for(int i =1;i<=1;i++) // increasing  of  1.
{
    cout<<i;
}
  cout<<endl;


   for(int i =1;i<=2;i++)
{
    cout<<" ";
}
 for(int i =1;i<=3;i++)
{
    cout<<i;
}
 for(int i =3;i>=1;i--)
{
    cout<<i;
}
  cout<<endl;

                      //OR

  for (int i=4;i>=0; i--)
  {
    //space print 

    for(int j=0;j<i;j++)
    cout<<" ";

  
  //increasing order  print 

  for(int j=1;j<=5-i;j++)
  cout<<j;

//print in decreasing order.


  for(int j=5-i-1; j>=1; j--){
  cout<<j;
  }
  cout<<endl;
  }

  OUTPUT:
    1
   121
  12321
 1234321
123454321

*/
    return 0;
}

//OK