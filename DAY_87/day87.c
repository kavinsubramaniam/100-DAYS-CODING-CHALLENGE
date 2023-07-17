// The problem statement can be viewed in this link : https://www.codechef.com/problems/AIRM

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int num[1500]={0}, size;
	    scanf("%d", &size);
	    for(int i=0;i<size;i++){
	        int temp;
	        scanf("%d", &temp);
	        num[temp]++;
	    }
	    for(int i=0;i<size;i++){
	        int temp;
	        scanf("%d", &temp);
	        num[temp]++;
	    }
	    int temp = num[0];
	    for(int i=1;i<1500;i++){
	        if(temp<num[i]){
	            temp = num[i];
	        }else{
	            continue;
	        }
	    }
	    printf("%d\n", temp);
	}
	return 0;
}

