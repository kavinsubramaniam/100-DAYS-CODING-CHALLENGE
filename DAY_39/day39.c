// The problem statement can be viewed in this link : https://www.codechef.com/problems/SNAKPROC

// Solution :

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, count=0, array[500]={0}, flag=0;
	    scanf("%d",&size);
	    char str[500];
	    scanf("%s", str);
	    for(int i=0;i<size;i++){
	        if(str[i]=='H'){
	            array[count] = 1;
	            count++;
	        }else if(str[i]=='T'){
	            array[count] = 2;
	            count++;
	        }else{
	            continue;
	        }
	    }
	    for(int j=0;j<count;j=j+2){
	        if(array[j]==1 && array[j+1]==2){
	            continue;
	        }else{
	            flag++;
	        }
	    }
	    if(flag==0 || count==0){
	        printf("Valid\n");
	    }else{
	        printf("Invalid\n");
	    }
	}
	return 0;
}

