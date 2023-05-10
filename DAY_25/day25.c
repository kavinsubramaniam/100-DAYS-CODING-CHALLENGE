// The problem statement can be viewed in this link : https://www.codechef.com/problems/ZCOSCH

// Solution :

#include <stdio.h>

int main(void) {
	int r;
	scanf("%d", &r);
	if(r<=50 && r>0){
	    printf("%d", 100);
	}
	else if(r>50 && r<=100){
	    printf("%d", 50);
	}else{
	    printf("%d", 0);
	}
	return 0;
}
