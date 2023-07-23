// The problem statement can be viewed in this link : https://www.codechef.com/problems/DIVAB?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--) {
		int a, b, n;
		scanf("%d %d %d",  &a, &b, &n);
		if(a % b == 0) {
			printf("%d\n", -1);
		}
		else {
			int j = (n / a), res=0;
            for(int i = n; i >= n; i = j * a) {
	            if(i % b != 0 && i % a == 0) {
		            res = i;
		            break;
		    }
		    j++;
	    }
			printf("%d\n", res);
		}	
	}
}



