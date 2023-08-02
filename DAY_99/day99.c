// The problem statement can be viewed in this link : https://www.codechef.com/problems/STONES?tab=statement

// Solution :

#include <stdio.h>
#include<string.h>
int main()
{
    int t,x;
    scanf("%d",&t);
   for(x=0;x<t;x++)
    {
        
    int i,j,c=0;
    char a[100];
    char b[100];

    scanf("%s%s",a,b);
    
        for(i=0;b[i]!='\0';i++)
        {
            for(j=0;a[j]!='\0';j++)
            {
                if(a[j]==b[i]){
                c++;
                break;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
