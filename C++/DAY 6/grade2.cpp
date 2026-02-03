//WAP to print out the grade of the student provide by there marks using( function).

#include<iostream>
using namespace std;

void findGrade(int marks){
    if(marks>90){
    cout<<"Grade: A+"<<endl;
     }

    else if(marks>80){
    cout<<"Grade: A"<<endl;
     }
    
     else  if(marks>70){
    cout<<"Grade: B+"<<endl;
     }

    else  if(marks>60){
    cout<<"Grade: B"<<endl;
     }

    else
    cout<<"Grade: C"<<endl;
    }
int main(){

    int student1=78,student2=98,student3=67,student4=56;


    findGrade(student1); //same code
    findGrade(student2); //same code
    findGrade(student3); //same code
    findGrade(student4); //same code

 return 0;
}
    
