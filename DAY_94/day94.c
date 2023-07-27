// The problem statement can be viewed in this link : https://www.codechef.com/problems/DAILY?tab=statement

// Solution : 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int n)
{
    int temp=1,res=1;
    while(temp!=n+1)
    {
        res*=temp;
        temp++;
    }
return res;
}
int main()
{
    int x,n,i,j,t=0,count=0,k;
    long long int sum=0;
    char a[10][54];
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(k=0;k<n;k++)
    {
        t=0;
       
      for(i=0;i<36;i=i+4)
       {
            count=0;
         for(j=i;j<i+4;j++)
         {
            //printf("%c ",a[k][j]);
            if(a[k][j]=='0')
            count++;
            
         }
        for(j=53-t;j>51-t;j--)
         {
           // printf(" %c",a[k][j]);
            if(a[k][j]=='0')
            count++;
         }
         //printf(" count = %d\n",count);
         t=t+2;
         if(x>count)
        continue;
       sum+=fact(count)/((fact(count-x))*fact(x));
        }
        
    
    }
     printf("%d\n",sum);
 return 0;
}
