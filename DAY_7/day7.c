// Problem
// 400M Race

// Alice, Bob, and Charlie participated in a 400-metre race.
// The time taken by Alice, Bob, and Charlie to complete the race was X,Y, and Z seconds respectively. Note that X,Y, and Z are distinct.

// Determine the person having the highest average speed in the race.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains three space-separated integers X,Y, and Z — the time taken by Alice, Bob, and Charlie to complete the race.
// Output Format
// For each test case, output on a new line:
// ALICE, if Alice had the highest average speed.
// BOB, if Bob had the highest average speed.
// CHARLIE, if Charlie had the highest average speed.Note that you may print each character in uppercase or lowercase.
// For example, the strings BOB, bob, Bob, and BoB are all considered identical.

// Constraints
// 1≤T≤1000
// 1≤X,Y,Z≤100
// X,Y, and Z are distinct.

// Sample 1:
// Input
// 3
// 1 2 8
// 4 100 1
// 7 3 5

// Output
// ALICE
// CHARLIE
// BOB

// Explanation:
// Test case 1: The time taken by the three participants to complete a 400 metre race was 1,2, and 8 respectively. Thus, their respective speeds were 400/1=400, 400/2=200, and 400/8=50 metres per second respectively.
// Thus, Alice has the maximum speed.

// Test case 2: The time taken by the three participants to complete a 400 metre race was 4,100, and 1 respectively. Thus, their respective speeds were 
// 400/4=100 ,400/100=4, and 400/1=400 metres per second respectively.Thus, Charlie has the maximum speed.

// Test case 3: Since Bob takes the minimum time to complete the race, he has the maximum average speed.
  
// Solution

#include <stdio.h>

int main(void) {
	int testcase, x, y, z, speed;
	scanf("%d", &testcase);
	for(testcase;testcase>0;testcase--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(x<y && x<z){
	        printf("ALICE\n");
	    }else if(y<z){
	        printf("BOB\n");
	    }else{
	        printf("CHARLIE\n");
	    }
	}
	return 0;
}

  
