// The problem statement can be viewed in this link : https://www.codechef.com/problems/CANDY123?tab=statement

// Solution :

#include <stdio.h>
int main(void) {
 int t;
 scanf("%d",&t);
 for(int i=1;i<=t;i++)
 {
     int a,b;
     scanf("%d%d",&a,&b);
     int l=0,s=0;
     int j=1;
     for(;;)
     {
        if(j%2==0)
        s=s+j;
        else
        l=l+j;
        if(s>b)
        {
            printf("Limak\n");break;
        }
        else if(l>a)
        {
            printf("Bob\n");break;
        }
        j++;
     }
 }
 return 0;
}
