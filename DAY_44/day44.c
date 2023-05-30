// The problem statement can be viewed in this link : https://www.codechef.com/problems/TTENIS?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    char str[100001];
	    int count=0, total=0, result;
	    scanf("%s", str);
	    for(int i=0; i<strlen(str); i++){
	        if(str[i]=='1'){
	            count++; 
	        }else{
	            total++;
	        }
	    }
	    result = (count>total)?printf("WIN\n"):printf("LOSE\n");
	    
	}
	return 0;
}

