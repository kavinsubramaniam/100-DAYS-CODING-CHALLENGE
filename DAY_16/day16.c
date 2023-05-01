// Problem
// Playing with Matches

// Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

// The first thing Chefu wanted to do was to calculate the result of his homework — the sum of A and B, and write it using matches.
// Help Chefu and tell him the number of matches needed to write the result.

// Digits are formed using matches in the following way: 

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains two space-separated integers A and B.
// Output
// For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B).

// Constraints
// 1≤T≤1,
// 1≤A,B≤10 

 
// Sample 1:
// Input
// 3
// 123 234
// 10101 1010
// 4 4
// Output
// 13
// 10
// 7

// Explanation:
// Example case 1: The result is 357. We need 5 matches to write the digit 3, 5 matches to write the digit 5 and 3 matches to write the digit 7.

// Example case 2: The result is 11111. We need 2 matches to write each digit 1, which is 2⋅5=10 matches in total.
  
// Solution

#include <stdio.h>

int main(void) {
	int testcase,num[]={6,2,5,5,4,5,6,3,7,6};
	scanf("%d", &testcase);
	while(testcase--){
	    int num1, num2, sum=0, required=0, ld=0;
	    scanf("%d%d", &num1, &num2);
	    sum = num1+num2;
	    while(sum>0){
	        ld = sum%10;
	        ld = num[ld];
	        required = required + ld;
	        sum = sum/10;
	        
	    }
	    printf("%d\n", required);
	}
	return 0;
}
