// The problem statement can be viewed in this link : https://www.codechef.com/problems/CHEFARRP?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    int count=0;
	    for(int i=0;i<n;i++){
	        int sum=0,product=1;
	        for(int j=i;j<n;j++){
	            sum=sum+arr[j];
	           product=product*arr[j];
	            if(sum==product){
	                count++;
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
