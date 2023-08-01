// The problem statement can be viewed in this link : 

// Solution : 

#include <stdio.h>
#include<stdlib.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        long n,sum=0;
        scanf("%ld",&n);
        long a[n],sa=0,sb=0;
        for(int i=0;i<n;i++){
            scanf("%ld",&a[i]);
            sa=sa+a[i];
        }
        long b[n];
        for(int i=0;i<n;i++){
            scanf("%ld",&b[i]);
            sb=sb+b[i];
        }
        for(int i=0;i<n;i++){
            sum=sum+abs(a[i]-b[i]);
        }
        if(sa!=sb){
            printf("-1\n");
        }
        else{
            printf("%ld\n",sum/2);
                
        }
        
    }
	return 0;
}
