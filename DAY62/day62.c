// The problem statement can be viewed in this link : https://www.codechef.com/problems/MUFFINS3

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int total;
	    scanf("%d", &total);
	    printf("%d\n", (total/2)+1);
	}
	return 0;
}

