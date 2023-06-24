// The problem statement can be viewed in this link : https://www.codechef.com/problems/TABLET

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, limit, screenSize=0;
	    scanf("%d%d", &size, &limit);
	    int price[size];
	    for(int i=0;i<size;i++){
	        int w, h, p;
	        scanf("%d%d%d", &w, &h, &p);
	        if(screenSize<(w*h) && limit>=p){
	            screenSize=w*h;
	        }
	    }
	    (screenSize) ? printf("%d\n", screenSize) : printf("no tablet\n");
	}
	return 0;
}

