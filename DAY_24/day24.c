The problem statement can be viewed in this link : https://www.codechef.com/problems/ZOOZ?tab=ide

Solution:

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    if(n%2==0){
	        for(int i=0;i<n;i++){
	            if(i == 0 || i == n-1){
	                printf("1");
	               	            
	            }else{
	                printf("0");
	            }
	        }
	        printf("\n");
	    }
	    else{
	        for(int i=0;i<n;i++){
	            if(i == 0 || i == n-1){
	                printf("0");
	            }else{
	                printf("1");
	            }
	        }
	     printf("\n");   
	    }
	}
	return 0;
}

