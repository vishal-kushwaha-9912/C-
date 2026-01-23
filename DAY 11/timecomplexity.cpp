//find the complexity of time taken by an algorithm


// #include <iostream>
// using namespace std;
// void func(int n) {
//     for (int i = 0; i < n; i++) {          
//         for (int j = 0; j < n; j++) {      
//             cout << i << " " << j << endl; 
//         }
//     }
// }


//  time complexity: O(n^2)



// Example of finding time complexity 

// for(i =0; i<n;i++){             //n
//     for(j=0;j<n;j++){           //n
//         for(k=0;k<n;k++){       //n
//             //some constant time operations
//             cout<<"hello"<endl;
//         }
//     }
// }
//ansewer: n^3  :n*n*n =n^3.
  

// find the complexity of the following code:



// for(int i=1; i<n;i++){
//     for(int j=0;j<i*i;j++){
//         //some constant time operations
//         cout<<"hello"<<endl;
//     }
// }
//answer: n(n+1)(2n+1)/6 = n^3   .                        //ignoring the constant terms and the lower order terms.then we get n^3.


                            //Types by Case

// worst case time complexity: when the input size is maximum or when the input is in such a way that it takes maximum time to execute the code.
//Worst Case : it is used to represent O(Big O).Represents maximum time (most commonly analyzed)

// best case time complexity: when the input size is minimum or when the input is in such a way that it takes minimum time to execute the code.
//Best Case : it is used to represent Best Case → Ω (Big Omega).Represents minimum time

// average case time complexity: when the input size is average or when the input is in such a way that it takes average time to execute the code.
//Average Case :it is used to represent Θ (Big Theta).Represents minimum time.


//Big-O notation is called an upper bound.

//Big O         : :    1) it is used to represent the time complexity of an algorithm in terms of the input size n. 
//                     2) it gives an upper bound on the time taken by an algorithm to execute.
//                     3) it is used to represent the worst case time complexity of an algorithm.


// O(n) or O(n^2) : means that the time taken by the algorithm increases linearly or quadratically with the increase in input size n.



//Big-Ω (Omega) describes the minimum time an algorithm will take, no matter what the input is.
// (Omega) : it is used to represent the best case time complexity of an algorithm.




//Big-Θ (Theta) describes the exact time an algorithm will take as a function of the input size.
// (Theta) : it is used to represent the average case time complexity of an algorithm.

//DAY 11 COMPLETED.
