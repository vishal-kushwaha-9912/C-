//Time Complexity measures how the running time of an algorithm grows as the input size increases.
                                          //OR

// NOTE : Time complexity is a function that describes the how the number of operartions of an algorithm performs grows as the input size increases.                                           
                                             
                                           //OR
                                             
//Time complexity is used to find the efficiency of an algorithm.
 
 //it is denoted by big O notation.
 
 //it is used to find how much time an algorithm will take to execute with respect to input size.
 
 //types of time complexity:
 
 //1. O(1) : constant time complexity.
 
 //2. O(n) : linear time complexity.
 
 //3. O(n^2) : quadratic time complexity.
 
 //4. O(log n) : logarithmic time complexity.
 
 //5. O(n log n) : linearithmic time complexity.
 
 //example of O(1):
 
 #include <iostream>
 using namespace std;
 
 int main() {
     int arr[] = {1, 2, 3, 4, 5};
     cout << arr[2] << endl; // accessing an element takes constant time
     return 0;
 }

 //DAY 10 COMPLETED.