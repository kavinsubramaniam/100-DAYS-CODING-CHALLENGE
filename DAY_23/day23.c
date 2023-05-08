The problem statement can be viewed in this link:  https://www.codechef.com/problems/HAPPYSTR

Solution:

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int count=0;
	    char word[1000];
	    scanf("%s", word);
	    for(int i=0;i<strlen(word);i++){
	        if(count == 3){
	            break;
	        }
	        else{
	            
	                if(word[i]=='a' || word[i]=='e' || word[i]=='o' || word[i]=='i'||word[i]=='u'){
	                    count++;
	                }
	                else{
	                    count = 0;
	                }
	           
	        }
	    }
	    if(count==3){
	        printf("Happy\n");
	    }else{
	        printf("Sad\n");
	    }
	    
	}
	return 0;
}
