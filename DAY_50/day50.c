// The problem statement can be viewed in this link : https://www.codechef.com/problems/ALPHABET?tab=statement

// Solutions :

#include <stdio.h>
#include <string.h>

int main(void) {
    char can[26];
    scanf("%s", can);
    int size, count=0;
    scanf("%d", &size);
    char test[1000];
    for(int i=0;i<size;i++){
        int flag=0;
        scanf("%s", test);
        
        for(int j=0;j<strlen(test);j++){
            for(int k=0;k<strlen(can);k++){
                if(test[j]==can[k]){
                    flag++;
                }else{
                    continue;
                }
            }
        }
    
        
        if(flag==strlen(test)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        
    }
    
    
    
	return 0;
}

