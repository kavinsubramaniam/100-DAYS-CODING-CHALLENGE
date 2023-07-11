// The problem statement can be viewed in this link : https://www.codechef.com/problems/AVG?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n, k, v, s=0;
    scanf("%d %d %d", &n, &k, &v);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        s+=a[i];
    }
    int q=0;
    q=v*(n+k)-s;
    if(q<=0 || q%k!=0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", q/k);
    }
	}
	
	return 0;
}
