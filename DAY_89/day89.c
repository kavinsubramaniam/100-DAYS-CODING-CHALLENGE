// The problem statement can be viewed in this link : https://www.codechef.com/problems/REPEAT

// Solution :

#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s;
        scanf("%d %d %d",&n,&k,&s);
        
        n=n*n;
        s=s-n;
        
        printf("%d\n",s/(k-1));
    }
	return 0;
}
