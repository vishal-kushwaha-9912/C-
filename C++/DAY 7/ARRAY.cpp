//Array is a collection of items stored at contiguous memory locations.
//The idea is to store multiple items of the same type together.
//This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).
//To declare an array, define the variable type, specify the name of the array followed by square brackets [] and specify the number of elements required by an array.
//Syntax : datatype arrayName [arraySize];
//Example : int  num[10]; // declares an array of 10 integers
//int  num[10] = {0,1,2,3,4,5,6,7,8,9}; // declares an array of 10 integers and initializes it
//Accessing Array Elements : You can access an array element by referring to its index number.


#include<iostream>
using namespace std;
int main()
{
    int  num[5] = {10,20,30,40,50}; // declares an array of 5 integers and initializes it
  
  
    //Accessing Array Elements

    //LONG METHOD TO PRINT THE MARKS 
   /* cout<<"First element: "<<num[0]<<endl; // prints 10
    cout<<"Second element: "<<num[1]<<endl; // prints 20
    cout<<"Third element: "<<num[2]<<endl; // prints 30
    cout<<"Fourth element: "<<num[3]<<endl; // prints 40
    cout<<"Fifth element: "<<num[4]<<endl; // prints 50

    //Modifying Array Elements
    num[2] = 100; // modifies the third element
    cout<<"Modified third element: "<<num[2]<<endl; // prints 100

    */

    for(int i=0; i<5;i++)

//cout<<num[5]<<endl; // its output: 0 1 2 3 4  this is the position of array.
    cout<<num[i]<<endl;

    return 0;

}