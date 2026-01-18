#include<iostream>
using namespace std;
int main(){

 int arr[5] ={4,6,3,7,9};
 int n=5;

int largest =arr[0];
for(int i=1;i<5;i++){
    if(arr[i]>largest){
        largest =arr[i];

    }
}
int secondlargest=-1;

for(int i=1;i<n;i++){
    if(arr[i]==largest){
  continue;
}
else if(arr[i]>secondlargest){

secondlargest=arr[i];

}
}
  cout<<"second largest element is: "<<secondlargest<<endl;

return 0;
}

//DAY 9 COMPLETED.

//REVISION TASKS:
//WAP to find the smallest and third smallest number in an array.
//REVISE ALL THE PROGRAMS DONE TILL NOW.