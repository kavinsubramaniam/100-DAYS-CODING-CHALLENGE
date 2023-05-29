The problem statement can be viewed in this link : https://www.codechef.com/problems/BSCOST

Solution : 

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, y, array[2]={0,0};
	    scanf("%d%d%d", &n, &x, &y);
	    char s[1001];
	    scanf("%s", s);
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            array[1]++;
	        }else if(s[i]=='0'){
	            array[0]++;
	        }
	    }if(array[0]==n || array[1]==n){
	        printf("%d\n", 0);
	    }else if(x>y){
	        printf("%d\n", y);
	    }else{
	        printf("%d\n", x);
	    }
	    
	}
	return 0;
}

