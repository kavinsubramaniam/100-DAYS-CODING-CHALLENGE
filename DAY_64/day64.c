// The problem statement can be viewed in this link : https://www.codechef.com/problems/ENCMSG

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size;
	    scanf("%d", &size);
	    char str[size], temp, reAlpha[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
	    scanf("%s", str);
	    for(int i=0;i<size;i+=2){
	        if(size%2!=0 && i==size-1){
	            str[i]= reAlpha[str[i]-97];
	            continue;
	        }
	        temp = str[i];
	        str[i] = str[i+1];
	        str[i+1] = temp;
	        str[i]= reAlpha[str[i]-97];
	        str[i+1]= reAlpha[str[i+1]-97];
	    }
	    printf("%s\n", str);
	}
	return 0;
}

