#include<iostream>
using namespace std;
int main()
{

    //WAP to print ***** in 6 row.
 /*
 for(int j=0;j<=6;j++){
    for(int i=1;i<=5;i++)
    cout<<"* " ;
    cout<<" \n";
 } 
   output: 
   
   * * * * *
   * * * * *
   * * * * * 
   * * * * * 
   * * * * *
   * * * * *
 
 */

 // WAP TO PRINT * BY INCREASING IN EACH row a single star.


/* 
  for(int i=1;i<=5;i++){
   
  for(int j=0;j<i;j++)
   
   cout<<"*";
     
   cout<<"\n";

 }

 OUTPUT :
 
*
**
***
****
*****
 */



                          // WAP to print this pattern:

/*
for(int j=6;j>=1;j--)
{
 for(int i=1;i<j;i++)
 cout<<"*";
 cout<<"\n";
}

OUTPUT:
 *****
 ****
 ***
 **
 *
*/


                      ///WAP to print inverted trinangle.
 
 /*
  for(int j= 4;j>=0;j--){                     // space in the  line for the stare.

  for(int k=0; k<j;k++){         

    cout<<" ";
  }

  for(int i=1;i<=5-j;i++)                   // code that * is printed in the output.
  cout<<"*";
  cout<<"\n";
}

OUTPUT:
     *
    **
   ***
  ****
 *****
******


*/


// 

 /*

for(int i =1;i<=21; i=i+5){

    for(int j=i;j<=i+4;j++)

        cout<<j<< "  ";

        cout<<endl;
}

        //OR


        int num = 1;
        for(int i=0;i<5; i++){

        for(int j=0;j<5;j++){
        
        cout<<num<<"  ";
        num++;
        }
        cout<<"\n";
        
        }

    
 
  //OUTPUT:
 1  2  3  4  5  
6  7  8  9  10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25

*/
   return 0;  
}

//ok
// DAY 3 COMPLETE.