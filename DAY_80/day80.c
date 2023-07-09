// The problem statement can be viewed in this link : https://www.codechef.com/problems/TWODIFFPALIN?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a, b;
	    scanf("%d%d", &a, &b);
	    ((a%2!=0 && b%2!=0) || (a==1 || b==1)) ? printf("No\n") : printf("Yes\n");
	}
	return 0;
}
