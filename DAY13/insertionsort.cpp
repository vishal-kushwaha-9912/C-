//insertion sort?
//answer:
/*
Insertion Sort is a sorting algorithm that sorts an array by taking one element at a time and inserting 
it into its correct position in the already sorted part of the array.

//How it works (step by step):
Given array:  8 3 5 2

Step 1: First element is already sorted
[8] 3 5 2

Step 2: Take 3 and insert it in sorted part
3 8 5 2

Step 3: Take 5 and insert it correctly
3 5 8 2

Step 4: Take 2 and insert it correctly
2 3 5 8

✅ Final Sorted Array
2 3 5 8

*/

//WAP for array to apply the insertion sort algorithm in C++

#include<iostream>
using namespace std;
int main(){
    int arr[6]={20,11,6,4,7,1};
    int n=6;


   for(int i=1;i<n;i++){

  for(int j=i;j>0;j--){

    if(arr[j]<arr[j-1]){
        
        swap(arr[j],arr[j-1]);
    }
    else{
        break;
    }
  }
    
}
 // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}