// The problem statement can be viewed in this link : https://www.codechef.com/problems/ALTSTR?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, Case[2]={0};
	    scanf("%d", &size);
	    char arr[size];
	    scanf("%s", arr);
	    for(int i=0; i<size; i++){
	        if(arr[i]=='1'){
	            Case[1]++;
	        }else{
	            Case[0]++;
	        }
	    }
        if(Case[0]>Case[1] && (Case[0]!=0 && Case[1]!=0)){
            printf("%d\n", Case[1]+Case[1]+1);
        }else if(Case[0]==0 || Case[1]==0){
            printf("%d\n", 1);
        }else if(Case[1]==Case[0]){
            printf("%d\n", Case[1]+Case[1]);
        }else{
            printf("%d\n", Case[0]+Case[0]+1);
        }
	    
	}
	return 0;
}

