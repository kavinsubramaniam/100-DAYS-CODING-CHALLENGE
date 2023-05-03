// Problem
// Wordle

// Chef invented a modified wordle.

// There is a hidden word S and a guess word T, both of length 5.

// Chef defines a string M to determine the correctness of the guess word. For the i"th index:

// If the guess at the i"th index is correct, the i"th character of M is G.
// If the guess at the i"th index is wrong, the i"th character of M is B.
// Given the hidden word S and guess T, determine string M.

// Input Format
// First line will contain T, number of test cases. Then the test cases follow.
// Each test case contains of two lines of input.
// First line contains the string S - the hidden word.
// Second line contains the string T - the guess word.
// Output Format
// For each test case, print the value of string M.

// You may print each character of the string in uppercase or lowercase (for example, the strings BgBgB, BGBGB, bgbGB and bgbgb will all be treated as identical).

// Constraints
// 1≤T≤1000
// ∣S∣=∣T∣=5
// S,T contain uppercase english alphabets only.

// Sample 1:
// Input
// 3
// ABCDE
// EDCBA
// ROUND
// RINGS
// START
// STUNT

// Output
// BBGBB
// GBBBB
// GGBBG

// Explanation:
// Test Case 1: Given string ABCDE, S=ABCDE and EDCBA ,T=EDCBA. The string M is:

// Comparing the first indices, 
// A≠E, thus, 
// M[1]=B.
// Comparing the second indices, B≠D, thus, M[2]=B.Comparing the third indices, C=C, thus, M[3]=G.
// Comparing the fourth indices, D≠=B, thus, 
// M[4]=B.
// Comparing the fifth indices, 
// E≠A, thus, 
// M[5]=B.
// Thus, 
// BBGBB, M=BBGBB.
  

// Solution

#include <stdio.h>
#include <string.h>

int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
	    char hidden[5], guess[5];
	    scanf("%s", hidden);
	    scanf("%s", guess);
	    for(int i=0;i<5;i++){
	        if(hidden[i]==guess[i])
	            printf("G");
	        else
	            printf("B");
	    }
	    printf("\n");
	}
	return 0;
}
