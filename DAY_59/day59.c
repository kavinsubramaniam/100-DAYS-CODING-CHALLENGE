// The problem statement can be viewed in this link : https://www.codechef.com/problems/LUCKYSTR?tab=statement

// Solution :

#include <stdio.h>
#include<string.h>
int main(void) 
{
	int n,k; 
	scanf("%d%d",&n,&k);
	char a[n][55];
	for(int i=0;i<n;i++)
	{
	    scanf("%s",a[i]);
	}
	for(int i=0;i<k;i++)
	{
	    char s[55];
	    scanf("%s",s);
	    int len=strlen(s),f=0;
	    for(int b=0;b<n;b++)
	    {
	        for(int j=0;j<len;j++)
	        {
	            int x=0;
	            while(s[x+j] && a[b][x] && s[x+j]==a[b][x]){ 
	                x++;
	            }
	            if(x==strlen(a[b])){
	                f=1;
	                break;
	            }
	        }
	        if(f==1) break;
	    }
	    (len>=47 || f==1) ? printf("Good\n") : printf("Bad\n");
	}
	return 0;
}

