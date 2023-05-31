// The problem statement can be viewed in this link : https://www.codechef.com/problems/QTOO_2523

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, flag=0, result;
	    scanf("%d", &size);
	    char str[10001];
	    scanf("%s", str);
	    for(int i=0; i<size; i++){
	        for(int j=i; j<size; j++){
	            if(str[i]==str[j] && i!=j){
	                
	                flag++;
	                break;
	            }
	        }
	        if(flag != 0){
	            break;
	        }
	    }
	    result = (flag!=0)? printf("%d\n", size-2) : printf("%d\n", -1);
	}
	return 0;
}

