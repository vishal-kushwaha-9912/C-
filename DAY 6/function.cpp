/* >A function is used to avoid repeating work and make code simple and organized.
>In short:
Function = input → work → output
>A function is a block of code that performs a specific task.

*/

#include<iostream>
using namespace std;

    //declare and define .
    //return_type functionNAMe(parameter, parameter, parameter)
    
 int factorial (int n){

    int fact =1;
    for(int i =1; i<=n;i++){
    fact*=i;
 }
 return fact ;
 }
   int sum (int a, int b){
    return a+b;
   }
    


int main()

{
    //factorial
    int num =5, num2=7 ,num3=8;
    


    //function call , argument 
    int answer1 =factorial(num);
    int answer2 =factorial(num2);
    int answer3 =factorial(num3);

  //print the output of the factorial.
    cout<<answer1<<endl<<answer2<<endl<<answer3<<endl;
    
// print the num of sum .
    int sum1 =sum(3, 4);
    cout<<sum1<<endl;
    
}