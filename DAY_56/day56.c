// The problem statement can be viewed in this link : https://www.codechef.com/problems/LAPIN?tab=statement

// Solution :

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int test1[26]={0}, flag=0;
	    char str[1001];
	    scanf("%s", str);
	    
	    for(int i=0;i<strlen(str);i++){
	        if(strlen(str)%2!=0 && (strlen(str)/2)==i){
	            continue;
	        }else{
	            test1[str[i]-97]++;
	        }
	       // printf("%c\t", str[i]);
	    }
	    
	    for(int j=0;j<26;j++){
	        if(test1[j]%2!=0){
	            flag++;
	        }
	       // printf("%d\t", test1[j]);
	    }
	    (flag==0) ? printf("YES\n") : printf("NO\n");
	}
	return 0;
}

