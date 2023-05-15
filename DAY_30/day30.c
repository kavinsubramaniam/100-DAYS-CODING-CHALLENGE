// The problem statement  can be viewed in this link: https://www.codechef.com/problems/MISSP

// Solutions : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size;
	    scanf("%d", &size);
	    int num[size];
	    for(int i=0;i<size;i++){
	        scanf("%d", &num[i]);
	    }
	    
	    for(int j=0;j<size;j++){
	        for(int k=j+1;k<size;k++){
	            if(num[j]==num[k]){
	                num[j] = 0;
	                num[k] = 0;
	            }
	        }
	    }
	    
	    for(int n=0;n<size;n++){
	        if(num[n]!=0){
	            printf("%d\n", num[n]);
	        }
	    }
	}
	return 0;
}

