 #include<iostream>
 using namespace std;
 int main(){
    int num [7]={1,2,3,4,5,6,7};
    int size =7;
    int target =6;
    int start =0 ,end= size-1;
    int index  =-1;

    while(start<=end){
        int mid= start+(end -start)/2;
        
        if(num[mid]==target){
            index = mid;
            break;

        }
        else if(num[mid]<target){
            start = mid+1;

        }
        else{
            index = mid;
            end = mid-1;
        }
    }

    
    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;

 }

 //DAY 14 COMPLETED.