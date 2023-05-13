// The problem statement can be viewed in this link: https://www.codechef.com/problems/TSORT

// Solution:

#include<stdio.h>
int arr[1000000];
     
int main()
{
    
	int a,n;
    scanf("%d",&n);
    while(n--)
    {
	    scanf("%d",&a);
        arr[a]++;
    }
    a=0;
    while(a<1000000)
    {
        while(arr[a])
        {
            printf("%d\n",a);
            arr[a]--;
        }
    a++;
    }
return 0;
}
