// The problem statement can be viewed in this link : https://www.codechef.com/problems/DOMINANT2?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int size, arr[1001]={0}, max=0, count=0;
	    scanf("%d", &size);
	    for(int i=0;i<size;i++){
	        int num;
	        scanf("%d", &num);
	        arr[num]++;
	        if(arr[num]>max){
	            max=arr[num];
	        }
	    }
	    for(int j=0;j<1001;j++){
	        if(max==arr[j]){
	            count++;
	        }
	    }
	    (count>=2) ? printf("NO\n") : printf("YES\n");
	}
	return 0;
}

