// The problem statement can be viewed in this link:https://www.codechef.com/problems/DIGARR

// Solution:


#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int len, flag=0;
	    scanf("%d", &len);
	    char num[len];
	    scanf("%s", num);
	    for(int i=0;i<len;i++){
	        if(num[i]=='5' || num[i]=='0'){
	            flag = 1;
	            break;
	        }
	        
	    }
	    if(flag){
	        printf("Yes\n");
	    }else{
	        printf("No\n");
	    }
	    
	    
	}
	return 0;
}
