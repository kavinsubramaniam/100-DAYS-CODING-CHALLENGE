// The problem statement can be viewed in this link : https://www.codechef.com/problems/ODDPAIRS?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    long long int num;
	    scanf("%lld", &num);
	    printf("%lld\n", (num*num)/2);
	}
	return 0;
}

