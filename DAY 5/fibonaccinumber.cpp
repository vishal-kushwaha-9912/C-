#include<iostream>
using namespace std;

    int fib(int n){
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
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fib(n);
    cout << result;

    return 0;
}