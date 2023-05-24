// The problem statement can be viewed in this link : https://www.codechef.com/problems/SLOWSOLN

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int testcase, maxval, sumval, count=0;
	    scanf("%d%d%d", &testcase, &maxval, &sumval);
	    for(int i=0;i<testcase;i++){
	        if(sumval<=0){
	            break;
	        }
	        if(maxval<sumval){
	            sumval = sumval - maxval;
	            count = count + (maxval*maxval);
	        }else{
	            count = count + (sumval*sumval);
	            sumval = sumval - maxval;
	        }
	        
	    }
	    printf("%d\n", count);
	}
	return 0;
}
