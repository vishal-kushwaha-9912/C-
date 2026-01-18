//WAP to print the sum of unique element in an array.
//

#include<iostream>
using namespace std;
int main()
{
    
  int arr[5]={1,3,4,2,4};
 int n=5;
int  sum =0;
    cout<<"unique element are :"; //print unique element

 for(int i=0;i<n;i++){

    bool found =false;
    
    for(int j=0;j<n;j++)
     {
        if(i==j)
        continue; //skip same index comparison
    
     else if(arr[i]==arr[j]){
        found=true;  //duplicate found
        break;
   } 
 }
  if (found==false){
    cout<<arr[i]<<" ";  //print unique element.

    sum+=arr[i];
  }
}


//

    cout<<"sum of the unique element is:"<<sum;
  

    
return 0;



}