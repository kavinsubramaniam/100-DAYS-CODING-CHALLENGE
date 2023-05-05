// The problem statement can be viewed in this link: https://www.codechef.com/problems/PALL01

// Solution:

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    char word[100];
	    scanf("%s", word);
	    int len = strlen(word), flag = 1;
	    for(int i=0;i<len;i++){
	        if(word[i]!=word[len-(i+1)]){
	            flag = 0;
	            break;
	        }else{
	            continue;
	        }
	    }
	    if(flag){
	        printf("wins\n");
	    }else{
	        printf("loses\n");
	    }
	}
	return 0;
}
