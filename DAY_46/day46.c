// This problem statement can be viewed in this link : https://www.codechef.com/problems/ABSTRING

// Solution :

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, temp=0, flag=0, array1[26]={0};
	    scanf("%d", &size);
	    char str[1000001], array[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	    scanf("%s", str);
	    if(size%2==0 ){
	        for(int i = 0; i<size ; i++){
	            for(int k=0;k<26;k++){
	                if(array[k]==str[i]){
	                    array1[k]++;
	                }
	            }
	            array[temp]++;
	        }
	    }else{
	        flag++;
	    }
	    for(int j=0; j<26 ; j++){
	        
	        if(array1[j]%2==0){
	            continue;
	        }else{
	            flag++;
	        }
	    }
	    if(flag!=0){
	        printf("NO\n");
	    }else{
	        printf("YES\n");
	    }
	}
	return 0;
}

