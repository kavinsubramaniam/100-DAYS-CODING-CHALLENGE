The problem statement can be viewed in this link : https://www.codechef.com/problems/WEIGHTBL

Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int w1, w2, x1, x2, m;
	    scanf("%d%d%d%d%d", &w1, &w2, &x1, &x2, &m);
	    if((x1*m)<=w2-w1 && w2-w1<=(x2*m)){
	        printf("%d\n", 1);
	    }else{
	        printf("%d\n", 0);
	    }
	}
	return 0;
}
