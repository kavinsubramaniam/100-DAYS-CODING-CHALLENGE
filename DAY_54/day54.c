// The problem statement can be viewed in this link : https://www.codechef.com/problems/MATPAN

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int price[26], letters[26]={0}, count=0;
	    char str[50001];
	    for(int i=0;i<26;i++){
	       int num=0;
	       scanf("%d", &num);
	       price[i]=num;
	    }
	    scanf("%s", str);
	    for(int j=0;str[j]!='\0';j++){
	       // printf("%d\t", str[j]-97);
	        letters[str[j]-97]++;
	    }
	    for(int k=0;k<26;k++){
	        if(letters[k]==0){
	           // printf("%d\t", count);
	            count+=price[k];
	        }else{
	            continue;
	        }
	       //printf("%d\n", letters[k]);
	    }
	    printf("%d\n", count);
	    
	}
	return 0;
}

