#include <iostream>
#include <cmath>
using namespace std;


  int mynum(int x){
  
  if(x==0)
  return 0;

   int ans=1;

   for(int i=1; i*i<=x; i++){
    ans=i;

   }
  
    return ans;
}
int main(){
  int x;
  cout<<"enter the square number:";
  cin>>x;
  cout<<"the square root of num is:"<<mynum(x);
  return 0;
}

