//rotate array by one


#include<iostream>
using namespace std;
int main(){
    //initialize array
    int arr[5]={1,2,3,4,5};
    int n =5;

 //store last element in temp
    int temp= arr[n-1];

 //shift elements to right
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    //put temp at first position
  arr[0]=temp;

 //print array
    for(int i=0;i<n;i++){
    cout<<arr[i]<< "   ";
    }

        return 0;

}