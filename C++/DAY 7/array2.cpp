//why array index is always staring with 0.
//answer: 

#include<iostream>
using namespace std;
int main()
{
 /*int n;
 cout<<"enter the size of the array:";
 cin>>n;  //never ask the value of array from the user/

  int arr[8]={5,6,78,34,2,3,4};   // the data in arry is all same and not other type of data consider in it.

  cout<<"enter the value of the array ";
  for(int i=0; i<8; i++){
   
  

  cout<<arr[i]<<endl;
  }*/
  

                               // find the address of the array.



     //used formula : address of i element =(first address)OR base-address+(index *size of data)

     /*
     EXAMPLE:
    int arr[4] = {10,35,65,78}
     
 */
           //WAP TO PRINT THE AVG AND SUM OF THE MARKS

   /*
int marks [5]={70,80,40,30,100};

 int sum =0;

for(int i=0;i<5;i++)

 sum +=marks[i];

cout<<sum/5<<endl;

*/
                  //WAP TO PRINT THE ADDRESS OF ARRAY 

/*
                  int marks [5]={70,80,40,30,100};

                  for(int i=0;i<5;i++)
                  {
                    cout<<&marks[i]<<endl;
                  }

  */      
 
  
                //WAP TO PRINT THE HIGHEST VALUE OF THE MARKS.

/*
                int marks [5]={70,80,40,30,100};
 //let consider the first number  is greater.

 int heighest =marks[0];
 int index =0;

 for(int i=0;i<5;i++)
 {
    if(marks[i]>heighest){
        heighest =marks[i];
        index = i;
    }

 }
cout<<heighest<<endl<<index<<endl;

*/

                    //WAP TO CHECK THE SPACIFIC MARKS IS PRESENT OR NOT.
         
                    //LINEAR SEARCH

  /*  int marks [5]={70,80,40,30,100};

    int student_marks = 90;

    for(int i =0; i<5;i++){

        if(student_marks==marks[i]){

            cout<<"yes";
           return 0;
        }

    }
cout<<"NO"<<endl;
*/


     //WAP to print the boolean is ture or false.

     
 //Question: why we take false ? (found = false)
///Answer:We take found = false because we don’t know yet whether the value exists in the array or not.

int marks [5]={70,80,40,30,100};

    int student_marks = 100;

     bool found =false;

     for(int i=0;i<5;i++)
     {
        if(marks[i]==student_marks){
            found =true;
            break;
        }
     }
     if(found){
        cout<<"YES";

     }
     else
     cout<<"NO";
  return 0;
}

// DAY 7 COMPLETED. 