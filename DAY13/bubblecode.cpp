// Bubble Sort Implementation in C++ OR 
//WAP to sort an array IN increasing order using Bubble Sort Algorithm

#include <iostream>
//#include <vector>
using namespace std;
int main(){
    int arr[6]={3,5,2,8,6,1};
    int n=6;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {

   cout<<arr[i]<<" ";
   }
    return 0;
}

//OUTPUT---> 1 2 3 5 6 8
