// The problem statement can be viewed in this link : https://www.codechef.com/problems/APPLEORANGE?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    while(n!=m){
	        if(n>m)  n=n-m;
	        if(n<m)  m=m-n;
	          }
	    printf("%d\n",n);
	}
	return 0;
}

