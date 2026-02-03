#include<iostream>
using namespace std;

//function overloading : same function name with different parameter list (type or/and no of parameters)
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}

float sum (float a, float b){
    return a+b;
}
int main(){

    float a=4.2,b=6.4;

    //function calls.

    cout<<sum(3,4)<<endl;

    cout<<sum(4,8,8)<<endl;

    cout<<sum(a,b)<<endl;

    return 0;
}