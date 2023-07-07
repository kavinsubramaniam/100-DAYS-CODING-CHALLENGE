// The problem statement can be viewed in this link : https://www.codechef.com/problems/NEWPIECE

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, x, y;
	    scanf("%d%d%d%d", &a, &b, &x, &y);
	    if(((x+y)%2 == (a+b)%2) && (x!=a || y!=b)){
	        printf("%d\n", 2);
	    }else if(((x+y)%2 != (a+b)%2) && (x!=a || y!=b)){
	        printf("%d\n", 1);
	    }else{
	        printf("%d\n", 0);
	    }
	}
	return 0;
}

