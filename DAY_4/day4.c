// Problem
// Tekken

// The ultimate battle has begun in Tekken.
// Each fight has two players. Let the initial health of the players be X and Y, then, after the fight, the health of both the players reduces by min(X, Y).
// Anna, Bob, and Claudio have initial health levels of A,B, and C respectively. Each pair of players fight exactly once.
// Considering that you can schedule the fight between each pair in any order, find whether Anna can have a positive health level at the end of the battle.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// The first and only line of each test case contains three space-separated integers A,B, and C — the initial health levels of Anna, Bob, and Claudio respectively.

// Output Format
// For each test case, output on a new line, YES, if you can schedule the fight between each pair in an order such that Anna can have a positive health at the end of the battle. Otherwise, output NO.
// You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered identical.

// Constraints
// 1≤T≤1000
// 0≤A,B,C≤1000

// Sample 1:
// Input

// 3
// 4 2 0
// 2 7 4
// 5 1 4
  
// Output
// YES
// NO
// YES

// Explanation:
// Test case 1: Consider the following sequence of fights:
// Fight 1: Anna and Bob fight. Thus, the health level of both players reduces by min(4, 2)=2. The final health levels of Anna and Bob after the fight are 2 and 0 respectively.
// Fight 2: Bob and Claudio fight. Thus, the health level of both players reduces by min(0, 0)=0. The final health levels of Bob and Claudio after the fight are 0 and 0 respectively.
// Fight 3: Anna and Claudio fight. Thus, the health level of both players reduces by min(2, 0)=0. The final health levels of Anna and Claudio after the fight are 2 and 0 respectively.
// Thus, in the above sequence of fights, Anna has a positive health remaining at the end.
// Test case 2: It can be shown that there exists no sequence of fights such that Anna has a positive health remaining at the end of the battle.
// Test case 3: Consider the following sequence of fights
// Fight 1: Bob and Claudio fight. Thus, the health level of both players reduces by min(1, 4)=1. The final health levels of Bob and Claudio after the fight are 0 and 3 respectively.
// Fight 2: Anna and Bob fight. Thus, the health level of both players reduces by min(5, 0)=0. The final health levels of Anna and Bob after the fight are 5 and 0 respectively.
// Fight 3: Anna and Claudio fight. Thus, the health level of both players reduces by min(5, 3)=3. The final health levels of Anna and Claudio after the fight are 2 and 0 respectively.
// Thus, in the above sequence of fights, Anna has a positive health remaining at the end.

// Solution
#include <stdio.h>
int main(){
    int a, b, c, testcase;
    scanf("%d",&testcase);
    for(testcase;testcase>0;testcase--){
        scanf("%d%d%d",&a, &b, &c);
        if((abs(b-c))<a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
