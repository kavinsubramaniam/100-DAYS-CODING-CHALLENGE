// The problem statement can be viewed in this link : https://www.codechef.com/problems/NAME1

// Solution :

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int arr[26]={0},arr2[26]={0}, size;
	    char nameA[40000], nameB[40000], nameC[40000];
	    scanf("%s%s", nameA, nameB);
	    for(int i=0;i<strlen(nameA);i++){
	        arr[nameA[i]-97]++;
	    }
	    for(int i=0;i<strlen(nameB);i++){
	        arr[nameB[i]-97]++;
	    }
	    scanf("%d", &size);
	    while(size--){
	        scanf("%s", nameC);
	        for(int i=0;i<strlen(nameC);i++){
	            arr2[nameC[i]-97]++;
	        }
	    }
	    for(int j=0;j<26;j++){
	        if(arr[j]<arr2[j]){
	            printf("NO\n");
	            size=0;
	            break;
	        }
	    }if(size!=0){
	        printf("YES\n");
	    }
	}
	return 0;
}

