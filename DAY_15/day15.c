// Problem
// Hardest Problem Bet

// There are 3 problems in a contest namely A,B,C respectively. Alice bets Bob that problem C is the hardest while Bob says that problem B will be the hardest.

// You are given three integers 
// S A,S B,S C which denotes the number of successful submissions of the problems A,B,C respectively. 
// It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

// If Alice wins the bet (i.e. problem C is the hardest), then output Alice.

// If Bob wins the bet (i.e. problem B is the hardest), then output Bob.

// If no one wins the bet (i.e. problem A is the hardest), then output Draw.

// Note: The hardest problem is the problem with the least number of successful submissions.

// Input Format
// The first line of input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains three space-separated integers S A,S B,S C , denoting the number of successful submissions of problems A,B,C respectively.
// Output Format
// For each test case, output the winner of the bet or print Draw in case no one wins the bet.

// Constraints
// 1≤T≤100
// 1≤S A,S B,S C≤100
// S A,S B,S Care all distinct.
// Sample 1:

// Input
// 3
// 1 4 2
// 16 8 10
// 14 15 9
  
// Output
// Draw
// Bob
// Alice

// Explanation:
// Test case 1: Problem A turns out to be the hardest so no one wins the bet.

// Test case 2: Problem B turns out to be the hardest so Bob wins the bet.

// Test case 3: Problem C turns out to be the hardest so Alice wins the bet.
  
// Solution

#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
	    int a, b, c;
	    scanf("%d%d%d", &a, &b, &c);
	    if(b<c&&b<a)
	        printf("Bob\n");
	    else if(c<a)
	        printf("Alice\n");
	    else 
	        printf("Draw\n");
	    
	}
	
	return 0;
}
