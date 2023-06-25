// The problem statement can be viewed in this link : https://www.codechef.com/problems/BROKPHON?tab=statement

// Solution :

#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int size,count=0;
	    scanf("%d",&size);
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {
	         scanf("%d",&arr[i]);
	    }
	    if(arr[0]!=arr[1])
	    count++;
	    if(arr[size-1]!=arr[size-2])
	    count++;
	    for(int i=1;i<size-1;i++)
	    {
	        if(arr[i]!=arr[i-1] || arr[i]!=arr[i+1])
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
