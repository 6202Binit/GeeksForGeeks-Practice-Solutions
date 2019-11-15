/*
Given an array A of N integers. The task is to find a peak element in it.
An array element is peak if it is not smaller than its neighbours. For corner elements, we need to consider only one neighbour.

Note: There may be multiple peak element possible, in that case you may return any valid index.

Input Format:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N. Then in the next line are N space separated values of the array.

Output Format:
For each test case output will be 1 if the index returned by the function is an index with peak element.

User Task:
You don't have to take any input. Just complete the provided function peakElement() and return the valid index.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= A[] <= 1000

Example:
Input:
2
3
1 2 3
2
3 4
Output:
1
1

Explanation:
Testcase 1: In the given array, 3 is the peak element.
Testcase 2: 4 is the peak element.
*/

// arr: input array
// n: size of array
int peakElement(int arr[], int n)
{
   // Your code here
    if(n == 0)
        return 0;
        
    if(n == 1)
        return arr[0];
        
    int l, r, mid;
    l = 0;
    r = n - 1;
    mid = (l + r) / 2;
    
    while(l <= r){
        if((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
            return mid;
            
        else if(arr[mid + 1] >= arr[mid])
            l = mid + 1;
            
        else
            r = mid - 1;
            
        mid = (l + r) / 2;
    }
    
    return 0;
}