// The problem statement can be viewed in this link : https://www.codechef.com/problems/SC31?tab=statement

// Solution :

#include <stdio.h>
int main() 
{
	int T;
	scanf("%d",&T);
	while(T--) 
	{
	    int x[10]={0},n,s,sum=0;
	    scanf("%d",&n);
	    for (int i=0;i<n;i++)
	    {
	        scanf("%d",&s);
	        for(int j=0;s;j++) 
	        {
	            x[j]^=(s%10);//every time reverses the resultant sequence
	            s/=10;
	        }
	    }
	    for(int i=0;i<10;i++)
	    sum+=x[i];
	    printf("%d\n",sum);
	}
	return 0;
}
