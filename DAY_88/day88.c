// The problem statement can be viewed in this link : https://www.codechef.com/problems/BALLOON?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,ans,a=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=1;i<=n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=1;i<=n;i++){
	        if(arr[i]<=7 && arr[i]>=1){
	            a++;
	            if(a==7){
	                ans = i;
	                break;
	            }
	        }
	    }
	    printf("%d\n",ans);
	}
	return 0;
}
