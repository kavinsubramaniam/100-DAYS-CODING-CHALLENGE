// The problem statement can be viewed in this link : https://www.codechef.com/problems/EVENTUAL?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, arr[26]={0}, flag=0;
	    scanf("%d", &size);
	    char str[size];
	    scanf("%s", str);
	    for(int i=0;i<size;i++){
	        arr[str[i]-97]++;
	    }
	    for(int j=0;j<26;j++){
	        if(arr[j]%2!=0){
	            flag++;
	            break;
	        }
	    }
	    (flag)?printf("NO\n"):printf("YES\n");
	}
	return 0;
}

