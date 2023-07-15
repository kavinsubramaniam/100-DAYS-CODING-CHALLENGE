// The problem statement can be viewed in this link : https://www.codechef.com/problems/BRACKETS?tab=statement

// Solution :

#include <stdio.h>

int fun(char ch[]){
    int bal=0,max=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='(') bal++;
        else bal--;
        
        if(max>bal) max=max;
        else max=bal;
    }
    return max;
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    char ch[100001];
	    scanf("%s",&ch);
	    int r=fun(ch);
	    for(int i=0;i<r;i++){
	        printf("(");
	    }
	    for(int i=0;i<r;i++) printf(")");
	    printf("\n");
	}
	return 0;
}
