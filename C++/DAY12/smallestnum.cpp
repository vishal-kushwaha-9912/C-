//smallest number in array:

#include <iostream>
using namespace std;
int main() {
    int arr[5]={6,4,7,2,1};
    int n=5;
   
// 1 task be palce the  smallest number in the first position in the array.

//traverse the array.
   for(int i=0;i<n-1;i++){
 int index =i;
//compare each element with the first element.
   if(arr[i]<arr[index]){
     index =i;
   }
//Find the smallest number from the elements that are not sorted yet.
for(int j=i+1; j<n; j++){
    if(arr[j]<arr[index]){
        index=j;
    }
}
   //just swap the number.
   swap(arr[index],arr[i]);
}
   
   //print the array(display or print the array).
  for (int i = 0; i < n; i++) {

    //print the elements of array smallest number at first position.
        cout << arr[i] << " ";
  }

    return 0;

}
 
//output---> 1 4 7 2 6

//time complexity---> n^2.
//space complexity---> O(1)

//DAY 12 COMPLETED.