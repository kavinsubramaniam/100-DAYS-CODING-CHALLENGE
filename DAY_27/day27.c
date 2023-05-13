// The problem statement can be viewed in this link: https://www.codechef.com/problems/CFRTEST

// Solution:

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int num[n];
	    for(int i=0;i<n;i++){
	        scanf("%d", &num[i]);
	    }
	    int count=0;
	    for(int j=0;j<n-1;j++){
	        for(int k=j+1;k<n;k++){
	            if(num[j]==num[k] && num[j]!=0){
	                
	                num[k]=0;
	                count++;
	            }
	        }
	        
	    }
	    
	    printf("%d\n", n-count);
	}
	    
	
	return 0;
}

