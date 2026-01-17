#include<iostream>
#include<vector>  // include the vector library.
using namespace std;
int main(){

    vector<int>arr(5);  // is similar as the arr[] . its store the array .
                        //* the size of array with the help of vector you can change at any time .

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    

    arr.push_back(90);  // it will add the element at the last of the array .
    arr.push_back(10);

    arr.pop_back();  // it will remove the last element of the array .

    int n = arr.size();
    {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    }
    return 0;
}