// This problem statement can be viewed in this link : https://www.codechef.com/problems/KOL15A

// Solutions :

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    char str[1001];
	    int sum=0;
	    scanf("%s", str);
	    for(int i=0;str[i]!='\0';i++){
	        if(str[i]>=49 && str[i]<=57){
	            sum = sum + (str[i]-48);
	        }
	    }
	    printf("%d\n", sum);
	}
	return 0;
}
