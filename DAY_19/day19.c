// Problem statement can be viewed in this link: https://www.codechef.com/problems/BROKENSTRING

// Solution: 

#include <stdio.h>
#include <string.h>
int main(void) {
    int testcase;
    scanf("%d", &testcase);
    while(testcase--){
        int n;
        scanf("%d", &n);
        char S[n];
        scanf("%s", S);
        int p = n/2;
        int flag=1;
        for(int i=0;i<n/2;i++){
            if(S[i]!=S[p]){
                flag=0;
                break;
            }
            p++;
        }
        if(flag){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
	return 0;
}
