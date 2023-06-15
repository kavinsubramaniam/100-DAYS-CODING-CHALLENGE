// The problem statement can be viewed in this link : https://www.codechef.com/problems/ERROR?tab=statement

// Solution :

#include <stdio.h>
#include<string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char ch[6000000];
		int i=0,len,count=0;
	    scanf("%s",&ch);
		len=strlen(ch);


		while(i!=len)
		{
	    
	    
	    if(ch[i]=='1' && ch[i+1]=='0' &&  ch[i+2]=='1'|| ch[i]=='0' && ch[i+1]=='1' && ch[i+2]=='0')
		{
	    printf("Good");
		count=1;

		break;
		}
	    
		i++;

		}
		if(count!=1)
		{
		printf("Bad");
		}
	    
	    printf("\n");
	}
	return 0;
}
