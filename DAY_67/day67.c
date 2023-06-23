// The problem statement can be viewed in this link : https://www.codechef.com/problems/ELECTIONS?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, c;
	    scanf("%d%d%d", &a, &b, &c);
	    if(a>50){
	        printf("A\n");
	    }else if(b>50){
	        printf("B\n");
	    }else if(c>50){
	        printf("C\n");
	    }else{
	        printf("NOTA\n");
	    }
	}
	return 0;
}

