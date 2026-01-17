#include<iostream>
using namespace std;
int main()
{
    int fib(int n)
    if(n<=1){
        return n;
    }
    int first = 0,second =1;
    for(int i=2;i<=n;i++){
    int curr= first + second;
    first = second ;
    second =curr;
}
return second;


}