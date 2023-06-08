// The problem statement can be viewed in this link : https://www.codechef.com/problems/NONADJFLIP?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, count=0, count0=0;
	    scanf("%d", &size);
	    char str[size+1];
	    scanf("%s", str);
	    for(int i=0;i<size-1;i++){
	        if(str[i]=='1' && str[i+1]=='1'){
	            count++;
	        }
	        else if(str[i]=='0'){
	            count0++;
	        }
	    }
	    if(count!=0){
	        printf("%d\n", 2);
	    }else if(count0==size-1 && str[size-1]=='0'){
	        printf("%d\n", 0);
	    }else{
	        printf("%d\n", 1);
	    }
	}
	return 0;
}
