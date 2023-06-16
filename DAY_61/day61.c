// The problem statement can be viewed in this link : https://www.codechef.com/problems/CS2023_STK

// Solution :

#include <stdio.h>
int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int count1=0, count2=0, max1=0, max2=0, size=0;
	    scanf("%d", &size);
	    for(int i=0;i<size;i++){
	        int num;
	        scanf("%d", &num);
	        if(num!=0){
	            count1++;
	            if(max1<count1){
	                max1=count1;
	            }
	        }else if(num==0){
	            count1=0;
	        }
	    }
	    for(int i=0;i<size;i++){
	        int num;
	        scanf("%d", &num);
	        if(num!=0){
	            count2++;
	            if(max2<count2){
	                max2=count2;
	            }
	        }else if(num==0){
	            count2=0;
	        }
	    }
	    (max1==max2) ? printf("Draw\n") : ((max1>max2) ? printf("Om\n") : printf("Addy\n"));
	}
	return 0;
}

