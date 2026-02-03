// problem solve .

//Binary search is applied when the array is sorted.
                      //OR
// When the array is in sorted form, we apply the binary search algorithm.


 #include<iostream>
 #include<vector>
 using namespace std;

 int main(){
    int arr [8]={1,2,3,4,4,4,4,5}; // Array indices start from 0 to 7 (total 8 elements).
   
    int num=8;
   

    int start =0,end = num-1;

    int target=4;

    int index1 = -1;
    int index2 = -1;


    //find the first occurance of the target 

//  int index1;
    while(start <=end){
        int mid = start+(end -start )/2;

        if(arr[ mid ]==target){
            index1 = mid;
            end =mid-1;

        }
        else if(arr[ mid ]<target){
            start =mid+1;

        }
        else{
            end =mid-1;
        }
    }
//  int index2;

 start =0, end =num-1;

    while(start <=end){
        int mid = start+(end -start )/2;

        if(arr[ mid ]==target){
            index2 = mid;
            start = mid+1; //move right .

        }
        else if(arr[ mid ]<target){
            start =mid+1;

        }
        else{
            end =mid-1;
        }
    }

        // Store results in a vector.


    vector<int> ans;
    ans.push_back(index1);
    ans.push_back(index2);

    cout << "First occurrence: " << ans[0] << endl;
    cout << "last occurrence: " << ans[1] << endl;

    return 0;

 }

 //answer: