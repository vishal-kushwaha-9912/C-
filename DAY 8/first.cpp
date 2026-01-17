

   //WAP TO PASS A NUMBER THROUGH ARRAY

#include<iostream>
using namespace std;

void printvalue(int a[],int  n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<endl;

    }
    a[0]=90;
}


int main(){

int arr[5] = {10,20,30,11,18 };
printvalue(arr,5);

cout<<arr[0];

return 0;


}