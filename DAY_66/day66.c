// The problem statement can be viewed in this link : https://www.codechef.com/problems/URCALC?tab=submissions

// Solution : 

#include <stdio.h>

int main(void) {
	int a, b;
	char opr;
	scanf("%d\n%d\n", &a, &b);
	scanf("%c", &opr);
	if(opr=='+'){
	    printf("%d", a+b);
	}else if(opr=='-'){
	    printf("%d", a-b);
	}else if(opr=='*'){
	    printf("%d", a*b);
	}else{
	    printf("%.7f", 1.0*a/b);
	}
	return 0;
}
