// The problem statement can be viewed in this link : https://www.codechef.com/problems/NOFIX?tab=statement

// Solution : 

#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        int k=0;
        for(int i=0; i<n; i++){
            int v=1+i+k;
            if(v==a[i])
            k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
