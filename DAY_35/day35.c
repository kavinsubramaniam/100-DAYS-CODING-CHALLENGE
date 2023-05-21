// The problem statement can be viewed in this link : https://www.codechef.com/problems/EQUALELE

// Solution : 

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],maxi=0;
        int count[1000001]={0};
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            count[a[i]]++;
            if(maxi<count[a[i]]){
                maxi=count[a[i]];
            }
        }
        printf("%d\n",n-maxi);
    }
    return 0;
}
