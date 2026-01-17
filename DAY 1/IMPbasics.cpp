#include<iostream>
using namespace std;
int main()
{

  //  int num1=100,num2;
 /* Arthmetic Operator
 // + , - , *  ,%:remainder


 //Assigment operator

 // a+=b; this means a =a+b. Answer is 7.
 // a-=b; this means a = a-b.  Answer is-1.
 // a*=b; this means a = a*b. Answer is 12.
 //a %=b ;this means a = a%b. Answer is 0(remainder).
 */


 /* comparison operators( is always answer in  0(false ) or 1(true))

                                      : ANSWER
 a==b  means  ( a is equal to b        : 0(false))
 a!=b  means  ( a is not equal to b    :1(true))
 a>b   means  ( a is greater then b    :1(true) )
 a<b   means  (a is less then b        :0(false))
 a <=b  means  ( a is less equal to b   :0(false))
 a>=b  means  ( a is gretar equal to b :1(true))



 cout<<(a>=b);*/

 /*
 LEFT SHIFT 
 let a = 4
 a = a<<2;  //  left shift means  2 is the power of value a . this is called left shit.
 cout<<a; 

 OUTPUT is = 8


 / /RIGHT SHIFT
 //let a = 100; // right shift means  
 a=a>>2;
 cout<<a;

 */

 /*
 LOGICAL OPERATOR

                                        // AND (&&)  both must be true 

 true && true //true
 true && false //false

 EXM = cout<<true && false;
    = cout<<true && true;


 //OR (||) at least one must be true .

 true || false  //true 
 false || false // false

 EXM = cout<<false || false;
     =cout<<true || false;

 // NOT (!) REVERSES
 ! true  // false
 ! false // true
 
 EXM = cout<<!true;
     = cout<<!false;
 * /

 /* 

                            PRE INCREMENT :


 first be increase then we show the value
                 OR
 first be increase the value of b by the add of 1 in a . then store in the b.

   let int num1 = 10,num2;

 //int num2 = ++NUM;
 num2 = ++num1;
 cout<<num2<<" \n ";
 cout<<num1;

 OUTPUT : 11 first its show its add +1 in 10 then show its output 


                    //PRE DECREMENT

 first be decrease the value  then we show the current value
 let int num1 = 10,num2;

 //int num2 = --NUM;
 num2 = --num1;
 cout<<num2<<" \n ";
 cout<<num1;



                        //  POST INCREMENT :

 first be show the previous value then we increase the value and show then to user .
                                   OR
 first to be print the num1 value in output after that we add the num1+num2 then show the output to the user.

 let int num1 = 10,num2 ;

  num2 =num1++;

  cout<<num2<<" \n ";
  
  cout<<num1;
    

                        /// POST DECREMENT :

  first be show the previous value then we DECREASE  the value and then show then to user .

 let num1 =10,b;

 num2 = num1--;

 cout<<num2<<" \n ";

 cout<<num1;

 */
  /*
                                 //  BITWISE OPERATOR  ( & , | , ^ )

   this operator said that first you convert your num1 ,num2 in binary form then apply the (AND ,OR ) operation. 

 * only for this (XOR) ^  = if both binary number is d/f then its become 1 and  if same then its become 0.
 
 //  & , | , ^  
   
 EXM :
  int num1 =2,num2=3;
cout<<"(num1 & num2)" 
  */
 int num1 =10,num2=5;
cout<<(num1 & num2); 
 return 0;

 }
