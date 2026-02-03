//How to find the square root/nearest root of the number of any number by the using.
#include<iostream>
using namespace std;

int mySqrt(int x){
 if(x<=1)
  {
    return x;
  }

  int start =1;
  int end = x, ans =-1;
  while (start<=end)
  {
    long long mid = start +(end-start)/2;
// perfect square
    if(mid *mid==x){
        return mid;
    }
    //right side move
else if(mid<=x/mid){    // this line is used to avoid integer overflow. you don't used this if (mid * mid <= x) in some case its overflow.
    ans = mid;
    start = mid +1;

}
//left side move 
else {
    end = mid -1;
}
  }
return ans;

}
int main()   //  REQUIRED
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Square root = " << mySqrt(n);

    return 0;
}