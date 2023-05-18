// The problem statement can be viewed in this link : https://www.codechef.com/problems/FLIPCARDS

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int num, close, result;
	    scanf("%d%d", &num, &close);
	    result = (num/2>=close) ? close : abs(num-close);
	    printf("%d\n", result);
	}
	return 0;
}

