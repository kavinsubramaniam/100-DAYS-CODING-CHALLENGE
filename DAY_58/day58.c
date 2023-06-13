// The problem statement can be viewed in this link : https://www.codechef.com/problems/LOCKDRAW

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int arr[3], max=0, count=0;
	    for(int i=0;i<3;i++){
	        scanf("%d", &arr[i]);
	        if(arr[i]>max){
	            max = arr[i];
	        }
	    }
	    for(int j=0;j<3;j++){
	        for(int i=j;i<3;i++){
	            if((arr[j]+arr[i])==max && i!=j){
	                count++;
	            }else{
	               continue;
	            }
	        }
	    }
	    (count!=0) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

