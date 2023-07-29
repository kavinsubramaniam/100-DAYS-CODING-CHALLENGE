// The problem statement can be viewed in this link : https://www.codechef.com/problems/CHFM?tab=statement

// Solution : 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,t;
	long int *a;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	    long int avg=0;
		scanf("%d",&n);//no. of coins
		a=(long int*)malloc(n*sizeof(long int));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			avg+=a[i];
		}
		if(avg%n!=0)
            printf("Impossible\n");
        else
        {
			avg/=n;
			for(i=0;i<n;i++)
			{
				if(avg==a[i])
					break;
			}
			if(i==n)
				printf("Impossible\n");
        	else
				printf("%d\n",i+1);
        }
	}
}

