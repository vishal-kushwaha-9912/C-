//binary search :
//answer: Binary search is an efficient algorithm to find the position of a target element in a sorted array.


//WAP to implement binary search algorithm in C++.

#include<iostream>
using namespace std;
int main(){

    int arr[5]={5,6,3,8,2};
    int nums=5;

    int start=0;
    int end= nums-1;
    int target=8;
    int index=-1;

//find middle index value
    int mids= start+(end-start)/2;

    if (arr[ mids ]==target)
    {
        index=mids;
        return mids;

    }
    else if(arr [mids]<target){
        //right side
        start =mids+1;

    }
    else{
   end = mids-1;
    }


if(index!=-1){
    cout<<"Element found at index "<<index;
}
else{
    cout<<"Element not found in the array"<<endl;
    return 0;
}
}

//DAY 13 COMPLETED.