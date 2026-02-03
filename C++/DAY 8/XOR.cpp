
#include<iostream>
using namespace std;
int main()
{
    int arry[7]={1,2,3,4,5,6};
    int size =7;
    int ans =0;
    
    for(int i=0;i<size;i++){
        ans =ans^arry[i];
        ans=ans^arry[i]^(size+1);

 
cout<<"Answer is:"<<ans<<endl;
    }

}


/*                             //OXR OPERATOR PROPERTIES



//when then element is same the you always get 0 , after XOR OPERATION.

//Example : 2^2=0 , 5^5=0 , 10^10=0


//when the element is different then you always get the different element after XOR OPERATION.

//Example : 2^3^2=3 , 5^6^5=6 , 10^11^10=11


//EXAMPLE: 1^0=1 , 0^1=1 , 0^0=0 , 1^1=0

*/

//DAY 8 COMPLETED.