// The problem statemant can be viewed in this link : https://www.codechef.com/problems/BREAKSTICK?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int size, a;
        scanf("%d%d", &size, &a);
        if(size%2==0||(size%2!=0&&a%2!=0)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}
