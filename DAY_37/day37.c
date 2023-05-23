// The problem statement can be viewed in this link : https://www.codechef.com/problems/ATM2

// Solution: 

#include <stdio.h>
#include <string.h>


int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, amount, test;
	    scanf("%d%d", &size, &amount);
	    char array[100001];
	    for(int i=0; i<size;i++){
	        scanf("%d", &test);
	        if(amount>=test){
	            array[i]='1';
	            amount = amount - test;
	        }else{
	            array[i]='0';
	        }
	    }
	    printf("%s\n", array);
	}
	return 0;
}

