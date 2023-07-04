// The problem statement can be viewed in this link : https://www.codechef.com/problems/ENDSORTED?tab=statement

// Solution :

#include<stdio.h>

int main()
{
    int a,n;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&a);
        int b[a],c=0,d=0;
        for(int i=0; i<a; i++) {
            scanf("%d",&b[i]);
            if(b[i]==1)
                c=i;
            if(b[i]==a)
                d=(a-1)-i;
        }
        if((c+d)>=a)
            a=c+d-1;
        else
            a=c+d;
        printf("%d\n",a);
    }
    return 0;
}

