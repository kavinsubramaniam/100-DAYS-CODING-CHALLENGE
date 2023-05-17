The problem statement can be viewed in this link : https://www.codechef.com/problems/PROC18A

Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int k, n;
	    scanf("%d%d", &n, &k);
	    int array[n];
	    for(int i=0;i<n;i++){
	        scanf("%d", &array[i]);
	    }
	    int temp=0;
	    for(int j=0;j<n;j++){
	        int max=0;
	        for(int m=0;m<k && j+m<n;m++){
	            
	            
	            max = max + array[j+m];
	            
	        }
	        if(max>temp){
	            temp = max;
	        }
	        
	    }
	    printf("%d\n", temp);
	    
	}
	return 0;
}

