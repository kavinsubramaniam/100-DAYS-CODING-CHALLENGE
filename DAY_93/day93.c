// The problem statement can be viewed in this link : https://www.codechef.com/problems/FFL?tab=statement

// Soltion :

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,s;
	    scanf("%d%d",&n,&s);
	    int price[n],player[n],i,min1=100,min2=100;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&price[i]);
	    }
	     for(i=0;i<n;i++)
	    {
	        scanf("%d",&player[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(player[i]==0)
	        {
	            if(price[i]<min1)
	            min1=price[i];
	        }
	        else if(player[i]==1)
	        {
	            if(price[i]<min2)
	            min2=price[i];
	        }
	    }
	    if((min1+min2)<=100-s)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

