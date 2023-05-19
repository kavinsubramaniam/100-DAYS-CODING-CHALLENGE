// The problem statement can be viewed in this link : https://www.codechef.com/problems/PLAYSTR

// Solution: 

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int count1=0, count2=0;
	    char array1[n], array2[n];
	    scanf("%s", array1);
	    for(int i=0;i<n;i++){
	        
	        if(array1[i]=='1'){
	            count1++;
	        }
	    }
	    scanf("%s", array2);
	    for(int j=0;j<n;j++){
	        
	        if(array2[j]=='1'){
	            count2++;
	            }
	    }
	    
	    if(count1 == count2){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	    
	}
	return 0;
}


