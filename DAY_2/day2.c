// Problem
// Easy Pronunciation

// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.
// We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.
// You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
// For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer N, the length of string S.
// The second line of each test case contains the string S.
  
// Output Format
// For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.
// Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

// Constraints
// 1≤T≤100
// 1≤N≤100
// S contains only lowercase Latin characters, i.e, the characters {a,b,c,…,z}

// Sample 1:
// Input:
// 5
// 5
// apple
// 15
// schtschurowskia
// 6
// polish
// 5
// tryst
// 3
// cry

// Output:
// YES
// NO
// YES
// NO
// YES

// Explanation:
// Test case 1: "apple" doesn't have 4 or move consecutive consonants, which makes it easy to pronounce.
// Test case 2: "schtschurowskia" has 7 consecutive consonants, which makes it hard to pronounce.
// Test case 3: "polish" doesn't contain 4 or more consecutive consonants, so it's easy to pronounce.
// Test case 4: "tryst" contains 5 consecutive consonants, making it hard to pronounce.
// Test case 5: "cry" doesn't contain any vowels, but its length is less than 4 so it's still easy to pronounce.


// Solution
#include <stdio.h>
int main()
{
    int no_testcase, str_len;
    char input[100];
    scanf("%d",&no_testcase);
    for(int i=0;no_testcase>i;i++){
        scanf("%d",&str_len);
        scanf("%s",input);
        int is_notEasy=0;
        int max_count=0;
        for(int j=0;j<str_len;j++){
            if(input[j]=='a'||input[j]=='e'||input[j]=='i'||input[j]=='o'||input[j]=='u){
                is_notEasy=0;
            }else{
                is_notEasy++;
            }if(is_notEasy==4){
                max_count=4;
            }
        }
        if(max_count>=4){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }return 0;
}


