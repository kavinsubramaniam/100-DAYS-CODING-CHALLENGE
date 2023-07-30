// The problem statement can be viiewed in this link : https://www.codechef.com/problems/TWOTRAINS

// Solution : 

#include<stdio.h>
int main(int n){
    for(scanf("%*d");~scanf("%d",&n);){
        int sum=0,max=0;
        for(int p;--n;){
            scanf("%d",&p);
            if(max<p)
            max=p;
            sum+=p;
        }
        printf("%d\n",sum+max);
    }
	return 0;
}
