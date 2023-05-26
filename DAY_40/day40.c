// The problem statement can be viewed in this link : https://www.codechef.com/problems/PRIMEREVERSE

// Solution : 

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, num1=0, test1=0, result;
	    char a[100001], b[100001];
	    scanf("%d", &size);
	    scanf("%s", a);
	    scanf("%s", b);
	    for(int i=0;i<size;i++){
	        if(a[i]=='1'){
	            num1++;
	        }
	        if(b[i]=='1'){
	            test1++;
	        }
	    }
	    result = (num1==test1)? printf("YES\n") : printf("NO\n");
	    
	}
	return 0;
}

