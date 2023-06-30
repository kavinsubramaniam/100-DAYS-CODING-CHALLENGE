// The problem statement can be viewed in this link : https://www.codechef.com/problems/ZEROSTRING?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, zero=0, one=0;
	    scanf("%d", &size);
	    char str[size];
	    scanf("%s", str);
	    for(int i=0;i<size;i++){
	        (str[i]=='1')?one++:zero++;
	    }
	    if(one!=0 && zero!=0 && one!=zero){
	    (one>zero)?printf("%d\n", zero+1):printf("%d\n", one);
	    }else if(one==zero){
	        printf("%d\n", zero);
	    }else if(one==0){
	        printf("0\n");
	    }else if(zero==0){
	        printf("1\n");
	    }
	    
	}
	return 0;
}

