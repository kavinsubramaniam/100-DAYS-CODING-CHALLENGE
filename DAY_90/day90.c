// The problem statement can be viewed in this link : https://www.codechef.com/problems/MXEVNSUB

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int num, odd=0;
	    scanf("%d", &num);
	    for(int i=1;i<=num;i++){
	        if(i%2!=0){
	            odd++;
	        }
	    }
	    (odd%2==0) ? printf("%d\n", num) : printf("%d\n", num-1);
	}
	return 0;
}
