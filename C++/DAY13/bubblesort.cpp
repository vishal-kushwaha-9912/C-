                                                   //INTRODUCTION TO BUBBLE SORT ALGORITHM WITH EXAMPLE.
/*
Bubble sort :
               it is a simple sorting algorithm that repeatedly steps through the list,
               compares adjacent elements and swaps them if they are in the wrong order. 
               The pass through the list is repeated until the list is sorted.
*/

// How it works (step by step)

//1. Start at the beginning of the list.

//2. Compare the first two elements.

//3. Swap them if the first is greater than the second.

//4. Move to the next pair and repeat.

//5. After one full pass, the largest element is at the end.

// Repeat the process for the remaining elements until no swaps are needed.


//Example --->  [5,3,8,6,2]

//step1---> compare 5 and 3 ---> since 3 is smaller than 5 we swap their positions ---> [3,5,8,6,2]
//step2---> compare 5 and 8 ---> since 5 is smaller than 8 we do not swap their positions ---> [3,5,8,6,2]
//step3---> compare 8 and 6 ---> since 6 is smaller than 8 we swap their positions ---> [3,5,6,8,2]
//step4---> compare 8 and 2 ---> since 2 is smaller than 8 we swap their positions ---> [3,5,6,2,8]

//after first pass the largest element 8 is at the end of the list

//repeat the process for the remaining elements until the entire list is sorted

//final sorted list in ascending order ---> [2,3,5,6,8]