// The problem statement can be viewed in this link : https://www.codechef.com/problems/WATSCORE

// Solution:

#include <stdio.h>


int array[] = {0};
int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int num;
	    scanf("%d", &num);
	    int a, b, temp=0;
	    for(int i=0;i<num;i++){
	        scanf("%d%d", &a, &b);
	        if(a<9 && 0<a){
    	        if(array[a]<b){
    	            array[a]=b;
    	        }
	        }
	        else{
	            continue;
	        }
	        
	    }
	    int total = 0;
	    for(int j=0;j<9;j++){
	        total = total + array[j];
	        
	    }
	    printf("%d\n", total);
	    for(int k=0;k<9;k++){
	        array[k]=0;
	    }
	    
	    
	}
	
	return 0;
}
