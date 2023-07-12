// The problem statement can be viewed in this link : https://www.codechef.com/problems/HOWMANYMAX?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int n, i, sum;
	    scanf("%d", &n);
	    char a[n-1];
	    scanf("%s", a);
	    if(a[0]=='1')
	        sum = 1;
	    else
	        sum = 0;
	    for(i=0 ; i<n-1 ; i++)
	    {
	        if(a[i]=='0' && a[i+1]=='1')
	            sum++;
	    }
	        if(a[n-2]=='0')
	            sum++;
	    printf("%d\n", sum);
	}
	return 0;
}
