// Problem
// Make all equal using Pairs


// Chef has an array A of length N.
// In one operation, Chef can choose any two distinct indices (1≤i,j≤N,i=j) and either change A i to A j or change A j to A i.

// Find the minimum number of operations required to make all the elements of the array equal.

// Input Format
// First line will contain 
// T, number of test cases. Then the test cases follow.
// First line of each test case consists of an integer 
// N - denoting the size of array A.
// Second line of each test case consists of 
// N space-separated integers 

// Output Format
// For each test case, output the minimum number of operations required to make all the elements equal.

// Constraints
// 1≤T≤100
// 2≤N≤1000
// 1≤A i≤1000

// Sample 1:
// Input
// 4
// 3
// 1 2 3
// 4
// 5 5 5 5
// 4
// 2 2 1 1
// 3
// 1 1 2
// Output
// 2
// 0
// 2
// 1


// Solution

#include <stdio.h>
void main(){
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int size;
        scanf("%d", &size);
        int arr[size];
        for(int i=0;i<size;i++){
            scanf("%d", &arr[i]);
        }
        int count=0;
        for(int i=0;i<size;i++){
            int max=0;
            for(int j=0;j<size;j++){
                if(arr[i]==arr[j]){
                    max++;
                }
            }
            if(max>count){
                count = max;
            }
        }
        printf("%d\n", size-count);
    }
}
